/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshapraboth <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:27:44 by malshapraboth     #+#    #+#             */
/*   Updated: 2025/12/15 12:27:45 by malshapraboth    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES//Fixed.hpp"

Fixed::Fixed() : numValue(0) {
    std::cout << "Defaulet constructor called" << std::endl;
};


Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->numValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->numValue;
};

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBit member function called"<< std::endl;
    this->numValue = raw;
}