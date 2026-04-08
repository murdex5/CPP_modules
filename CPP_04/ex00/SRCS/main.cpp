/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:44:27 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 10:10:49 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Animal.hpp"
#include "../INCLUDES/WrongAnimal.hpp"
#include "../INCLUDES/Dog.hpp"
#include "../INCLUDES/Cat.hpp"
#include "../INCLUDES/WrongCat.hpp"

int main ( void ) {
    Animal a1;
    WrongAnimal a2;
    Cat c1;
    WrongCat c2;
    Dog d1;

    c1.makeSound();
    c2.makeSound();
    d1.makeSound();
    return 0;
}