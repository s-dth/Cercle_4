/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:34:18 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/18 20:50:54 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	test;
	std::string	level;

	if (ac == 2)
	{
		level = av[1];
		test.complain(level);
	}
	else
	{
		std::cerr << "Format should be : ./harlfilter <level>" << std::endl;
		return (1);
	}
	return (0);
}
