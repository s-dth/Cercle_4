/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:42:26 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 17:55:10 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "\033[33m### tab of animals test ###\033[0m\n";
    const Animal* animals[10];
    int i;

    i = 0;
    while (i < 5)
    {
        animals[i] = new Dog();
        i++;
    }
    while (i < 10)
    {
        animals[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        animals[i]->makeSound();
        delete animals[i];
        i++;
    }
    std::cout << "\n\n\033[33m### deep copy test ###\033[0m\n";
    Dog basic;
    Dog tmp1 = basic;
    std::cout << "Original Dog (basic): ";
    basic.makeSound();
    std::cout << "Copied Dog (tmp1): ";
    tmp1.makeSound();
    tmp1.getBrain()->setIdea(0, "New idea");
    std::cout << "Basic Dog's ideas: " << basic.getBrain()->getIdea(0) << std :: endl;
    std::cout << "Copied Dog's ideas after modification: " << tmp1.getBrain()->getIdea(0) << std :: endl;
    return (0);
}