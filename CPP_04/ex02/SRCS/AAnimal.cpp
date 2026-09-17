/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:47:56 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:47:46 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal"){
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
   std::cout << "AAnimal copy constructor called" << std::endl; 
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal &other ) {
    std::cout << "AAnimal assignment operator called" << std::endl;
    if ( this != &other ) {
        this->type = other.type;
    }
    return  *this;
}

void AAnimal::makeSound( void ) const {
    std::cout << "Generic AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const {
    return this->type;
}