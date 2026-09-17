/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:12:35 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:12:36 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Weapon.hpp"

Weapon::~Weapon() 
{
    std::cout << type << " is being destroyed." << std::endl;
}


void Weapon::setType(std::string _type)
{
    type = _type;
}

const std::string &Weapon::getType(void) const 
{
    return type;
}