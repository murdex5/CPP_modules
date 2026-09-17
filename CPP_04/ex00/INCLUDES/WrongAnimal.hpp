/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:31:02 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 10:14:06 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstdlib>

class WrongAnimal {

    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &other );
        WrongAnimal& operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        
        virtual void makeSound() const;

        // Getters & Setters
        std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, WrongAnimal& animal);

#endif