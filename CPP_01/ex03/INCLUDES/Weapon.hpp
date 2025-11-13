/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:12:24 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 14:12:26 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstdlib>

class Weapon
{
private:
   std::string type;
public:
    Weapon(std::string _type) : type(_type) {};
    ~Weapon();
    void setType(std::string _type);
    const std::string &getType(void) const;
};

#endif