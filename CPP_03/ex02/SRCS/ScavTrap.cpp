/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:15:58 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/08 09:47:29 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) 
{
    std::cout << "ScavTrap from ClapTrap created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &_name) : ClapTrap(_name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_dammage = 20;
    std::cout << "ScavTrap from ClapTrap " << this->name << " created\n";
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap from ClapTrap " << this->name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
    std::cout << "Assignment operator for ScavTrap " << this->name << " called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void ScavTrap::attack(const std::string& target ) {
    if (this->energy_points <= 0)
        std::cout << "Not enough energy points\n";
    else if (this->hit_points <= 0)
        std::cout << "ScavTrap: " << this->name << " is dead and cannot attack!\n";
    else
    {
        this->energy_points--;
        std::cout << "ScavTrap: " << this->name << " attacks " << target << ", causing " << this->attack_dammage << " points of demage!" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& claptrap);

void ScavTrap::guardGate()
{
    if (this->hit_points <= 0)
    {
        std::cout << "Cannot switch to guradmode because: ClapTrap " << this->name << " is dead" <<std::endl;
    }
    else 
        std::cout << "ScavRep from ClapTrap " << this->name << " is now in guard mode\n";
}
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}