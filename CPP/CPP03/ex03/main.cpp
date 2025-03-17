/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:58:40 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/25 19:17:07 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap D("tiger");
	
	D.attack("the lion");
	D.takeDamage(20);
	D.attack("the lion");
	D.takeDamage(20);
	D.beRepaired(10);
	D.whoAmI();
	return (0);
}
