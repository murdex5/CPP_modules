/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:18 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:48:17 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "./AAnimal.hpp"
# include "./Brain.hpp"


class Cat : public AAnimal
{
    private:
        Brain *b1;
    
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