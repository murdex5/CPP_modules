/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:41:58 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 13:48:47 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 100;
    attack_dammage = 30;
    std::cout << "FragTrap constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap decstrctor called\n";
}

void FragTrap::highFiveGuys( void ) {
    std::cout << "What a beautiful day! can i get a high five?\n";
}
