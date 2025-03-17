/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:28:14 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 17:37:49 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;
	Zombie	*hordeof3;

	hordeof3 = zombieHorde(3, "hordeof3");
	i = 0;
	while (i < 3)
	{
		hordeof3[i].announce();
		i++;
	}
	delete [] hordeof3;
	return (0);
}
