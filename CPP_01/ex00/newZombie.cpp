/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:30:43 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 10:30:45 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie_n = new (std::nothrow) Zombie(name);
    if (!zombie_n)
    {
        std::cerr << "Memory allocation failed for " << name << std::endl;
        return NULL;
    }
    zombie_n->announce();
    return zombie_n;
}