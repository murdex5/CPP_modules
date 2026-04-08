/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:31:20 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 09:59:27 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/WrongCat.hpp"

WrongCat::WrongCat() : Animal() {
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(Cat const &other) : Animal(other) {
    std::cout << "WrongCat copy oparator called\n";
}

WrongCat &WrongCat::operator=(Cat const &other)
{
    std::cout << "WrongCat assignment operator called\n";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

WrongCat::~WrongCat()  {
    std::cout << "WrongCat deconstructor called\n";
}

// Public methods

void WrongCat::makeSound(void) const {
    std::cout << this->getType() << " says: **Wrong Meow!! Wrong Meow!!**\n";
}
