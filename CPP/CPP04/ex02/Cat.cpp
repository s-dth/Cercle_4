/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:12:01 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:23:00 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& src):AAnimal(src), _brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << " * MEOW MEOW MEOW *" << std::endl;
}
