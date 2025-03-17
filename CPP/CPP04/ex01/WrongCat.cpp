/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:32:44 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 14:40:24 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "Wrongcat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src):WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
	if (this != &rhs)
	{
		std::cout << "WrongCat copy assignment operator called" << std::endl;
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << " * MEOW MEOW MEOW *" << std::endl;
}
