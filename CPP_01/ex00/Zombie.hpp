/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:30:14 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 10:30:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name_val) : name(name_val) {};
    ~Zombie();
    void announce( void );
};


// Externel functions 
Zombie *newZombie(std::string name);
void randomChump (std::string name);
#endif