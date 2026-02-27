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

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap from ClapTrap created with default constructor." << std::endl;
}

FragTrap::FragTrap(std::string const &_name) : ClapTrap(_name) {
    hit_points = 100;
    energy_points = 100;
    attack_dammage = 30;
    std::cout << "FragTrap from ClapTrap " <<this->name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap from ClapTrap " << this->name << " copied." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
    std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " decstrctor called\n";
}

void FragTrap::highFiveGuys( void ) {
    std::cout << "What a beautiful day! can i get a high five?\n";
}

std::ostream& operator<<(std::ostream& os, const FragTrap& claptrap);