/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:47:56 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/16 12:42:31 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
   std::cout << "Animal copy constructor called" << std::endl; 
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=( const Animal &other ) {
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &other ) {
        this->type = other.type;
    }
    return  *this;
}

void Animal::makeSound( void ) const {
    std::cout << "Generic Animal sound" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}