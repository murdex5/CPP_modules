/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:29:57 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 10:30:02 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *z1 = newZombie("Brendon the Zombie");
    randomChump("Bob guy");
    delete z1;
    return (EXIT_SUCCESS);
}