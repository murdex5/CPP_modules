/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:15:58 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 12:16:00 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ScavTrap.hpp"

std::ostream& operator<<(std::ostream& os, const ScavTrap& claptrap);

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    hit_points = 100;
    energy_points = 50;
    attack_dammage = 20;
    std::cout << "ScavTrap constructor called\n";
}
void ScavTrap::attack(const std::string& target ) {
    if (energy_points <= 0)
        std::cout << "Not enough energy points\n";
    else
    {
        energy_points--;
        std::cout << "ScavTrap: " << name << " attacks " << target << ", causing " << attack_dammage << " points of demage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavRep is now in guard mode\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}