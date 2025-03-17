/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:54:53 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:52:45 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain const& src);
	~Brain();
	Brain& operator=(Brain const& rhs);
	void setIdea(int i, std::string idea);
	std::string getIdea(int i);
};

#endif