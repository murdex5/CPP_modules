/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:14:40 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:14:41 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/HumanB.hpp"

HumanB::~HumanB() {
    std::cout << name << " is dead." << std::endl;
}

void HumanB::setWeapon(Weapon &_weopon)
{
    this->weapon = &_weopon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacked with their " << weapon->getType() << std::endl;
}