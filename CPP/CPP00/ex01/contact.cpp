/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:54:10 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 16:50:15 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::ft_set_values(std::string f, std::string l, std::string n, std::string p, std::string d)
{
	this->_first_name = f;
	this->_last_name = l;
	this->_nickname = n ;
	this->_phone_number = p;
	this->_darkest_secret = d;
}

void	Contact::print_contact(void)
{
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last_name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;
}

std::string	Contact::get_first_name(void)
{
	return(this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return(this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return(this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return(this->_phone_number);
}
std::string	Contact::get_darkest_secret(void)
{
	return(this->_darkest_secret);
}