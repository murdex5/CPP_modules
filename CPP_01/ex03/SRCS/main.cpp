/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:12:10 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:12:13 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/HumanA.hpp"
#include "../INCLUDES/HumanB.hpp"


int main(void)
{
    {
        Weapon club = Weapon("Crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Some other tupe of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("curde spoled club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return EXIT_SUCCESS;
}