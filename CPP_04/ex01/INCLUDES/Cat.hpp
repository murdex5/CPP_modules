/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:18 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 10:00:55 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "./Animal.hpp"


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