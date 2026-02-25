/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:14:03 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/25 13:49:26 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>

class ClapTrap {
    protected:
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

    // Getter & Setters
        std::string const &get_name( void ) const;
        int const  &get_hp(void) const;
        int const &get_energy_points(void) const;
        int const &get_attak_points(void) const;

        void set_name(std::string const &_name);
        void set_hp(int const &value);
        void set_enerygy_points(int const &value);
        void set_attack(int const &value);
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap);