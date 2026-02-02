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