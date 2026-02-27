/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:18 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/27 12:57:49 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "INCLUDES/Animal.hpp"


class Cat : public Animal
{
    public :
        Cat();
        Cat(Cat const &other);

        // Assignment Operator
        Cat &operator=(Cat const &other);

        // Deconstructor
        ~Cat();

        // Public methods
        void makeSound( void ) const;
    
};

# endif