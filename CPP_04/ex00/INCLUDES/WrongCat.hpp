/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:30:47 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/27 12:58:46 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "INCLUDES/Animal.hpp"

class WrongCat : public Animal
{
    public :
        WrongCat();
        WrongCat(Cat const &other);

        // Assignment Operator
        WrongCat &operator=(WrongCat const &other);

        // Deconstructor
        ~WrongCat();

        // Public methods
        void makeSound( void ) const;
    
}

# WRONG_CAT_HPP