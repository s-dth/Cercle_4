/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:53:46 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 16:49:57 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::set_new_contact(int i, std::string f, std::string l, std::string n, std::string p, std::string d)
{	
	_phonebook[i].ft_set_values(f, l, n, p, d);
}

Contact	PhoneBook::get_contact(int i)
{
	return(_phonebook[i]);
}

std::string	PhoneBook::get_first_name(int i)
{
	return(_phonebook[i].get_first_name());
}

std::string	PhoneBook::get_last_name(int i)
{
	return(_phonebook[i].get_last_name());
}

std::string	PhoneBook::get_nickname(int i)
{
	return(_phonebook[i].get_nickname());
}

std::string	PhoneBook::get_phone_number(int i)
{
	return(_phonebook[i].get_phone_number());
}

std::string	PhoneBook::get_darkest_secret(int i)
{
	return(_phonebook[i].get_darkest_secret());
}
