/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:31:34 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 09:59:25 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal() {
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(Cat const &other) : Animal(other) {
    std::cout << "WrongAnimal copy oparator called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    std::cout << "WrongAnimal assignment operator called\n";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

WrongAnimal::~WrongAnimal()  {
    std::cout << "Cat deconstructor called\n";
}

// Public methods

void WrongAnimal::makeSound(void) const {
    std::cout << this->getType() << " says: **WrongAnimal Sounds**\n";
}
