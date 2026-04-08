/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:31:34 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 10:15:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
   std::cout << "WrongAnimal copy constructor called" << std::endl; 
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &other ) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &other ) {
        this->type = other.type;
    }
    return  *this;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "Generic WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}