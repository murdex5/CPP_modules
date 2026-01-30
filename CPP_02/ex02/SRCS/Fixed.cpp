/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:06:33 by kadferna          #+#    #+#             */
/*   Updated: 2026/01/07 11:06:34 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES//Fixed.hpp"


// Default construtores
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

Fixed::Fixed() : numValue(0) {
    //std::cout << "Defaulet constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed &other)
{
    //::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->numValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
};


Fixed::Fixed(const int intValue)
{
    //std::cout << "Int constructor called" << std::endl;
    this->numValue = intValue << bits;
}

Fixed::Fixed(const float floatValue) {
    //std::cout << "Float construtor called" << std::endl;
    this->numValue = roundf(floatValue * ( 1 << bits));
}

int Fixed::getRawBits( void ) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->numValue;
};

void Fixed::setRawBits( int const raw ) {
    //std::cout << "setRawBit member function called"<< std::endl;
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

// Max fucntion

Fixed Fixed::max(const Fixed& a, const Fixed& b) {
    if (a.numValue > b.numValue)
        return a;
    else
        return b;
}

// Arithmetic operators

Fixed& Fixed::operator++() {
    ++numValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++numValue;
    return temp;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;

    result.numValue = (this->numValue * other.numValue) >> bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;

    result.numValue = (this->numValue / other.numValue) >> bits;
    return result;
}


// Comparison operators
bool Fixed::operator<(const Fixed& other) const {
    return numValue < other.numValue;
}

bool Fixed::operator>(const Fixed& other) const {
    return numValue > other.numValue;
}

bool Fixed::operator<=(const Fixed& other) const {
    return numValue <= other.numValue;
}

bool Fixed::operator>=(const Fixed& other) const {
    return numValue >= other.numValue;
}

bool Fixed::operator==(const Fixed& other) const {
    return numValue == other.numValue;
}

bool Fixed::operator!=(const Fixed& other) const {
    return numValue != other.numValue;
}