/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:14:20 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:14:21 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
   std::string name;
   Weapon *weapon;
public:
    HumanB(std::string _name) : name(_name) { this->weapon = NULL; };
    ~HumanB();
    void setWeapon(Weapon &_weopon);
    void attack();
};


#endif