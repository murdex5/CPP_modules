/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:31:02 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/27 12:59:31 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "INCLUDES/Animal.hpp"

class WrongAnimal : public Animal
{
    public: 
        WrongAnimal();
        WrongAnimal(WrongAnimal const &other);

        // Assignment operator
        WrongAnimal &operator=(WrongAnimal const &other);

        // Deconstrctor
        ~WrongAnimal();

        // Public meethods
        void makeSound( void ) const;
};

# endif