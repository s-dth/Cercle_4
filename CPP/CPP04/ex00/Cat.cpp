/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:12:01 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 14:16:12 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& src):Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		Animal::operator=(rhs);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << " * MEOW MEOW MEOW *" << std::endl;
}
