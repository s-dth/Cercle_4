/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:43:37 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 14:30:59 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "Animal (" << this->type << ") constructor called" << std::endl;
}

Animal::Animal(Animal const& src)
{
	if (this->type != "")
		std::cout << "Animal (" << this->type << ") copy constructor called" << std::endl;
	else
		std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	if (this->type != "")
		std::cout << "Animal (" << this->type << ") destructor called" << std::endl;
	else
		std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(Animal const& rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return(*this);
}

void	Animal::makeSound(void) const
{
	std::cout << " * default animal sound * " << std::endl;
}

std::string	Animal::getType(void) const
{
	return(this->type);
}
