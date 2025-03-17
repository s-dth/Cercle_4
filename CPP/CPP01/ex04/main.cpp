/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:57:55 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/24 20:57:06 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>

int contains_s1(const std::string &file, const std::string &s1)
{
	std::ifstream ifs(file.c_str());
	if (!ifs)
		return (2);
	std::string word;
	while (ifs >> word)
	{
		if (word == s1)
		{
			ifs.close();
			return (1);
		}
	}
	ifs.close();
	return (0);
}

int	open_files_and_replace(std::string file, std::string newfile, std::string s1, std::string s2)
{
	std::string word;
	int	i;
	
	std::ifstream ifs(file.c_str());
	if (!ifs)
	{
		std::cerr << "Error opening input file: " << std::strerror(errno) << std::endl;
		return (1);
	}
	if (ifs.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: Input file is empty." << std::endl;
		ifs.close();
		return (1);
	}
	if (contains_s1(file, s1) == 0)
	{
		std::cerr << "Error: there is no occurence of \"" << s1 << "\" in " << file << std::endl;
		return (1);
	}
	std::ofstream ofs(newfile.c_str());
	if (!ofs)
	{
		std::cerr << "Error opening output file: " << std::strerror(errno) << std::endl;
		return (1);
	}
	i = 0;
	while (ifs >> word)
	{
		if (i != 0)
			ofs << " ";
		if (word == s1)
			ofs << s2;
		else
			ofs << word;
		i++;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	newfile;

	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		newfile = filename;
		newfile.append(".replace");
		if (open_files_and_replace(filename, newfile, s1, s2) != 0)
			return (1);
	}
	else
	{
		std::cerr << "Format should be : ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	return (0);
}
