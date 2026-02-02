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