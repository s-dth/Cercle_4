/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:33:43 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/25 19:02:24 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamonTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src):ClapTrap(src), FragTrap(src), ScavTrap(src), _name(src._name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs)
{
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		_name = rhs._name;
	}
	return (*this);
}

void DiamondTrap::attack(std::string const& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
