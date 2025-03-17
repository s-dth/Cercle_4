/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:58:40 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/24 18:25:37 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap F("tiger");
	
	F.attack("the lion");
	F.takeDamage(20);
	F.attack("the lion");
	F.takeDamage(20);
	F.beRepaired(10);
	F.highFivesGuys();
	return (0);
}
