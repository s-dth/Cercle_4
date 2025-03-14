/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:53:43 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 16:50:10 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_add(PhoneBook *myPhoneBook, int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	while (first_name.empty())
	{
		std::cout << "first name: ";
		std::getline(std::cin, first_name);
	}
	while (last_name.empty())
	{
		std::cout << "last name: ";
		std::getline(std::cin, last_name);
	}
	while (nickname.empty())
	{
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
	}
	while (phone_number.empty())
	{
		std::cout << "phone number: ";
		std::getline(std::cin, phone_number);
	}
	while (darkest_secret.empty())
	{
		std::cout << "darkest secret: ";
		std::getline(std::cin, darkest_secret);
	}
	(*myPhoneBook).set_new_contact(i, first_name, last_name, nickname, phone_number, darkest_secret);
}

void	ft_search(PhoneBook *myPhoneBook, int nbr_ctc)
{
	int	i;
	int	idx;
	std::string	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	if (nbr_ctc == 0)
	{
		std::cout << RED << "PhoneBook is empty ! Use \"ADD\" to fill it.\n" << RESET;
		return;
	}
	i = 0;
	while (i < nbr_ctc && i < 8)
	{
		first_name = (*myPhoneBook).get_first_name(i);
		last_name = (*myPhoneBook).get_last_name(i);
		nickname = (*myPhoneBook).get_nickname(i);
		if (first_name.size() >= 10)
		{
			first_name.resize(9);
			first_name.resize(10, '.');
		}
		if (last_name.size() >= 10)
		{
			last_name.resize(9);
			last_name.resize(10, '.');
		}
		if (nickname.size() >= 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << first_name << "|";
		std::cout << std::setw(10) << last_name << "|";
		std::cout << std::setw(10) << nickname << std::endl;
		i++;
	}
	while (1)
	{
		std::cout << std::endl << YELLOW << "Enter the contact's index" << RESET << std::endl;
		std::getline(std::cin, index);
		std::stringstream ss(index);
		if (ss >> idx && idx > 0 && idx <= nbr_ctc)
		{
			(*myPhoneBook).get_contact(idx - 1).print_contact();
			break;
		}
		else
			std::cout << RED << "Invalid index. Please enter a valid one.\n" << RESET;
	}
}


int	main(void)
{
	PhoneBook	myPhoneBook;
	int			i;
	std::string	entry;

	i = 0;
	while (!std::cin.eof())
	{
		std::cout << YELLOW << "Enter \"ADD\", \"SEARCH\" or \"EXIT\" !" << RESET << std::endl;
		std::getline(std::cin, entry);
		if (entry == "EXIT")
			return (0);
		else if (entry == "ADD")
		{
			if (i >= 8)
			{
				ft_add(&myPhoneBook, i % 8);
				i++;
			}
			else
			{
				ft_add(&myPhoneBook, i);
				i++;
			}
		}
		else if (entry == "SEARCH")
			ft_search(&myPhoneBook, i);
		else
		{
			if (!std::cin.eof())
				std::cout << RED << "Enter only \"ADD\", \"SEARCH\" or \"EXIT\" !" << RESET << std::endl;
		}
	}
	return (0);
}
