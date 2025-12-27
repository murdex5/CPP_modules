/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshapraboth <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:27:22 by malshapraboth     #+#    #+#             */
/*   Updated: 2025/12/15 12:27:23 by malshapraboth    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <cstdlib>


class Fixed {
    private:
        int numValue;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
