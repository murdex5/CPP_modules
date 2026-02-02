/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:15:39 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 12:15:40 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include "../INCLUDES/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string _name);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& claptrap);