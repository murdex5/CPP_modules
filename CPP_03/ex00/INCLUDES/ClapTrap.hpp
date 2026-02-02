/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:27:36 by kadferna          #+#    #+#             */
/*   Updated: 2026/01/30 13:27:39 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>

class ClapTrap {
    private:
       std::string name;
       int hit_points;
       int energy_points;
       int attack_dammage;
    
    public:
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap);