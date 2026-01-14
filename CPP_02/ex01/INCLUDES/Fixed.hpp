/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:39:10 by kadferna          #+#    #+#             */
/*   Updated: 2025/12/27 13:39:11 by kadferna         ###   ########.fr       */
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
        float toFloat ( void ) const;
        int toInt ( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
