/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:31:02 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 11:31:04 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << _name << " is getting killed..." << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
