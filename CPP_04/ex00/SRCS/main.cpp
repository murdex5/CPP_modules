/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:44:27 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 10:28:28 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Animal.hpp"
#include "../INCLUDES/WrongAnimal.hpp"
#include "../INCLUDES/Dog.hpp"
#include "../INCLUDES/Cat.hpp"
#include "../INCLUDES/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    return 0;
}