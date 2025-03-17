/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:42:26 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/27 15:52:02 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\033[33m### ANIMAL ###\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    meta->makeSound(); // will output the default animal sound!
    delete meta;
    delete j;
    delete i;

    std::cout << "\n\033[33m### WRONG ANIMAL ###\033[0m" << std::endl;
    const WrongAnimal* metaWrong = new WrongAnimal();
    const Animal* jWrong = new Dog();
    const WrongAnimal* iWrong = new WrongCat();
    std::cout << jWrong->getType() << " " << std::endl;
    std::cout << iWrong->getType() << " " << std::endl;
    iWrong->makeSound(); // will output the wrong animal sound!
    jWrong->makeSound(); // will output the dog sound!
    metaWrong->makeSound(); // will output the default wrong animal sound!
    delete metaWrong;
    delete jWrong;
    delete iWrong;

    return 0;
}