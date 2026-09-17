/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:30 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:48:41 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Dog.hpp"

Dog::Dog() : AAnimal() {
    this->type = "Dog";
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &other) : AAnimal(other) {
    std::cout << "Dog copy oparator called\n";
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
        AAnimal::operator=(other);
    return *this;
}

Dog::~Dog()  {
    std::cout << "Dog deconstructor called\n";
}

// Public methods

void Dog::makeSound(void) const {
    std::cout << this->getType() << " says: **Woof! Woof!**\n";
}