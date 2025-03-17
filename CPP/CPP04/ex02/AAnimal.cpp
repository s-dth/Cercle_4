/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:43:37 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:18:24 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type):type(type)
{
	std::cout << "Animal (" << this->type << ") constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src)
{
	if (this->type != "")
		std::cout << "Animal (" << this->type << ") copy constructor called" << std::endl;
	else
		std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	if (this->type != "")
		std::cout << "Animal (" << this->type << ") destructor called" << std::endl;
	else
		std::cout << "Animal destructor called" << std::endl;
}
AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return(*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << " * default animal sound * " << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return(this->type);
}
