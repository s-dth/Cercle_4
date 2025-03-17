/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:32:18 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 14:42:57 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
	std::cout << "WrongAnimal (" << this->type << ") constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	if (this->type != "")
		std::cout << "WrongAnimal (" << this->type << ") copy constructor called" << std::endl;
	else
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	if (this->type != "")
		std::cout << "WrongAnimal (" << this->type << ") destructor called" << std::endl;
	else
		std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return(*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " * default wrong animal sound * " << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return(this->type);
}
