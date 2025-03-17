/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:43:28 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:14:35 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include "iostream"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const& src);
	virtual ~AAnimal();
	AAnimal& operator=(AAnimal const& rhs);
	virtual void	makeSound(void) const = 0;
	std::string	getType(void) const;
};

#endif