/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:28:14 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 16:54:18 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie;

	heap_zombie = newZombie("heap_zombie");
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("stack_zombie");
	return (0);
}