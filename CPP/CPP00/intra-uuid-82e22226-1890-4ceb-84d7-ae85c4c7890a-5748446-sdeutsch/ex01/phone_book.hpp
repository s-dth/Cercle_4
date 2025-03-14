/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:53:03 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/12 21:05:54 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "main.hpp"

class PhoneBook
{
private:
	Contact	_phonebook[8];
public:
	PhoneBook(){};
	~PhoneBook(){};

	void		set_new_contact(int i, std::string f, std::string l, std::string n, std::string p, std::string d);
	Contact		get_contact(int i);
	std::string	get_first_name(int i);
	std::string	get_last_name(int i);
	std::string	get_nickname(int i);
	std::string	get_phone_number(int i);
	std::string	get_darkest_secret(int i);
};

#endif