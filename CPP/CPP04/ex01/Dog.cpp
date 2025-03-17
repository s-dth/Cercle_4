/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:02:09 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:57:56 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const& src):Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(Dog const& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Dog copy assignment operator called" << std::endl;
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << " * WOOF WOOF WOOF *" << std::endl;
}

Brain* Dog::getBrain(void)
{
	return(this->_brain);
}
