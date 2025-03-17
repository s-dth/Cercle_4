/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:18:16 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/24 18:49:46 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}
ScavTrap::ScavTrap(ScavTrap const& src):ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << " tries to attack but can't do anything !" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_hit_points -= this->_attack_damage;
		this->_energy_points--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
}
