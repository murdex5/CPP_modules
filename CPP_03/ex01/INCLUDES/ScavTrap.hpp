/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:15:39 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 13:04:34 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "../INCLUDES/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(std::string const &_name);
        ScavTrap(ScavTrap const &copy);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();

        // Member function
        void attack(const std::string& target);
        void guardGate();
        
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& claptrap);

# endif