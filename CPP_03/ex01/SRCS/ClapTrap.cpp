/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:27:55 by kadferna          #+#    #+#             */
/*   Updated: 2026/01/30 13:27:57 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ClapTrap.hpp"

std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap);

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hit_points = 10;
    energy_points = 10;
    attack_dammage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other)
    {
        name = other.name;
        attack_dammage = other.attack_dammage;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target ) {
    if (energy_points <= 0)
        std::cout << "Not enough energy points\n";
    else
    {
        energy_points--;
        std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << attack_dammage << " points of demage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_points -= amount;
    std::cout << "ClapTrap: " << name << " took damage" << ", causing " << amount << " points of demage to " << name << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (energy_points <= 0)
        std::cout << "ClapTrap: "<< name << " cannot repiair due to the low energy points!\n";
    else
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap: " << name << " repaird " << amount << " points of demage" << std::endl;
    } 
}