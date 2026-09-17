/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:13:34 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 13:51:44 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/ClapTrap.hpp"
# include "../INCLUDES/ScavTrap.hpp"
# include "../INCLUDES/FragTrap.hpp"

int main( void )
{
    FragTrap a("Malsha");
    for (int i = 0; i < 101; i++)
        a.attack("Enemy");
    a.takeDamage(333);
    a.beRepaired(3333);
    a.highFiveGuys();
    return 0;
}

// Tests
/*
int main(void)
{
    std::cout << "Testing Constructor Chaining" << std::endl;
    FragTrap frag("Frankie");

    std::cout << "esting Combat Attributes" << std::endl;
    // FragTrap doesn't override attack, so it uses ClapTrap::attack
    // But it uses FragTrap's 30 Attack Damage!
    frag.attack("Bandit");
    
    frag.takeDamage(50);
    frag.beRepaired(25);

    std::cout << "Testing Special Ability" << std::endl;
    frag.highFiveGuys();

    std::cout << "Testing Extreme Damage" << std::endl;
    frag.takeDamage(200); // 100 HP goes to 0
    frag.attack("Another Bandit"); // Should fail because hit points are 0

    return 0;
}
    */