/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:47:45 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/16 12:44:23 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>

class Animal {

    protected:
        std::string type;
    
    public:
        Animal();
        Animal( const Animal &other );
        Animal& operator=(const Animal &other);
        ~Animal();
        
        virtual void makeSound() const;
        std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Animal& animal);