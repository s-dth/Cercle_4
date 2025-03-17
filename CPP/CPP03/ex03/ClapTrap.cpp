/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:58:35 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/24 18:46:42 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
	std::cout << "ClapTrap constructor called " << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
		*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " tries to attack but can't do anything !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_hit_points -= this->_attack_damage;
		this->_energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is attacked and takes " << amount << " points of damage!" << std::endl;
	this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " tries to repair herself but can't do anything !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " repairs herself and gain " << amount << " hit points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
}
