/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:28:14 by kadferna          #+#    #+#             */
/*   Updated: 2026/01/30 13:28:16 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ClapTrap.hpp"


int main( void )
{
    ClapTrap a("Malsha");

    a.attack("enemy");
    a.takeDamage(2);
    a.beRepaired(2);
    return 0;
}


// Testd
/*
int main( void )
{
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");
    ClapTrap c(a);
    ClapTrap d("Delta");
    d = b;

    std::cout << "Testing Basic Combat & Repair" << std::endl;
    a.attack("Bravo"); // Consumes 1 energy
    b.takeDamage(5);   // Bravo takes 5 damage
    b.beRepaired(3);   // Bravo repairs 3 HP (consumes 1 energy)

    std::cout << "\nTesting Energy." << std::endl;
    // 'a' started with 10 energy, used 1. Let's use the remaining 9.
    for (int i = 0; i < 10; i++) {
        a.attack("a wooden dummy");
    }
    // Now 'a' should be out of energy and fail to repair
    a.beRepaired(5);

    std::cout << "Testing Death (0 Hit Points)" << std::endl;
    c.takeDamage(10); // 'c' (copy of Alpha) takes 10 damage, dropping to 0 HP
    c.takeDamage(5);  // Should notify that it can't take more damage
    c.attack("Bravo"); // Should fail because of 0 HP

    return 0;
}
    */