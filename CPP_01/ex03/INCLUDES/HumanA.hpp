/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:14:10 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:14:11 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
   std::string name;
   Weapon &weapon;
public:
    HumanA(std::string _name, Weapon &_weopon) : name(_name), weapon(_weopon) {};
    ~HumanA();
    void attack();
};

#endif