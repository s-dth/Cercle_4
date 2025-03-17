/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:49:28 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/18 15:50:56 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#	define WEAPON_HPP

# include <iostream>
class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type):_type(type){};
	~Weapon(){};
	const std::string& getType(void) const;
	void	setType(std::string type);
};

#endif