/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:07:06 by kadferna          #+#    #+#             */
/*   Updated: 2026/01/07 11:07:07 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <cmath>

class Fixed {
    private:
        int numValue;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ~Fixed();

        Fixed(const int intValue);
        Fixed(const float floatValue);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        static Fixed max(const Fixed& a, const Fixed& b);

        Fixed& operator++();
        Fixed operator++(int);
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        float toFloat ( void ) const;
        int toInt ( void ) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
