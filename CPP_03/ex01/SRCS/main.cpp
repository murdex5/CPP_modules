/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:13:34 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 12:13:35 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ScavTrap.hpp"

int main( void )
{
    ScavTrap a("Malsha");
    a.attack("Enemy");
    a.takeDamage(333);
    a.beRepaired(3333);
    return 0;
}

// Tests
/*
int main( void )
{
    std::cout << "Testing Constructor Chaining" << std::endl;
    ScavTrap scav("Serena");
    ClapTrap clap("Clappy"); // Creating a standard ClapTrap for comparison

    std::cout << "Testing Overridden Attack" << std::endl;
    scav.attack("Enemy"); // Should use ScavTrap's attack
    clap.attack("Enemy"); // Should use ClapTrap's attack

    std::cout << "Testing Inherited Methods" << std::endl;
    scav.takeDamage(30);  // ScavTrap has 100 HP, so it survives easily
    scav.beRepaired(20);  // Should repair 20 HP, costing 1 energy

    std::cout << "Testing Special Ability" << std::endl;
    scav.guardGate();

    std::cout << "Testing Death" << std::endl;
    scav.takeDamage(150); // ScavTrap takes massive damage
    scav.attack("Ghost"); 

    return 0;
}
*/