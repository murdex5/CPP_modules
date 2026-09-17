/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:41 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:48:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Cat.hpp"

Cat::Cat() : AAnimal() {
    this->type = "Cat";
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const &other) : AAnimal(other) {
    std::cout << "Cat copy oparator called\n";
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        AAnimal::operator=(other);
    return *this;
}

Cat::~Cat()  {
    std::cout << "Cat deconstructor called\n";
}

// Public methods

void Cat::makeSound(void) const {
    std::cout << this->getType() << " says: **Meow! Meow!**\n";
}