/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:11 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/27 12:59:33 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "INCLUDES/Animal.hpp"

class Dog : public Animal
{
    public: 
        Dog();
        Dog(Dog const &other);

        // Assignment operator
        Dog &operator=(Dog const &other);

        // Deconstrctor
        ~Dog();

        // Public meethods
        void makeSound( void ) const;
};

# endif