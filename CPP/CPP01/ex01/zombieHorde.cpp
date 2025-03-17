/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:56:25 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 17:36:47 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;

	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].setname(name);
		i++;
	}
	return(horde);
}
