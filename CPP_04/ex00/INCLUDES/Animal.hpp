/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:47:45 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/27 12:33:08 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <cstdlib>

class Animal {

    protected:
        std::string type;
    
    public:
        Animal();
        Animal( const Animal &other );
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        
        virtual void makeSound() const;

        // Getters & Setters
        std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Animal& animal);

#endif