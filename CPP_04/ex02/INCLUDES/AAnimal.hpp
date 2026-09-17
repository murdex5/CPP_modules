/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:47:45 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:49:49 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP

# define AANIMAL_HPP

# include <iostream>
# include <cstdlib>

class AAnimal {

    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal( const AAnimal &other );
        AAnimal& operator=(const AAnimal &other);
        virtual ~AAnimal() = 0;
        
        virtual void makeSound() const;

        // Getters & Setters
        std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const AAnimal& animal);

#endif