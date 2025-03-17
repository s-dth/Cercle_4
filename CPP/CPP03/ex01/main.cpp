/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:58:40 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/25 17:11:46 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap S("tiger");
	
	S.attack("the lion");
	S.takeDamage(20);
	S.attack("the lion");
	S.takeDamage(20);
	S.beRepaired(10);
	S.guardGate();
	return (0);
}
