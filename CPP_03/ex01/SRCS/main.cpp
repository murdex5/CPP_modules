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