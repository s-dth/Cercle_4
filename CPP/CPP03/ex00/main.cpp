/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:58:40 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/21 20:12:20 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap S("tiger");
	
	S.attack("the lion");
	S.takeDamage(2);
	S.attack("the lion");
	S.takeDamage(5);
	S.beRepaired(3);
	S.takeDamage(5);
	S.attack("the lion");
	S.takeDamage(5);
	S.attack("the lion");
	return (0);
}
