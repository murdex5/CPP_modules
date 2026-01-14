/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:38:52 by kadferna          #+#    #+#             */
/*   Updated: 2025/12/27 13:38:53 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES//Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

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


Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->numValue = intValue << bits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float construtor called" << std::endl;
    this->numValue = roundf(floatValue * ( 1 << bits));
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->numValue;
};

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBit member function called"<< std::endl;
    this->numValue = raw;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(this->numValue) / (1 << bits);
}

int Fixed::toInt ( void ) const {
    return this->numValue >> bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}