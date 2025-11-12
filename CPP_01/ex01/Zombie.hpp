/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:29:15 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 11:29:17 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
	private:
		std::string _name;

	public:
		void setName(std::string name) { _name = name; };
		~Zombie();
		void announce(void) const;
};


Zombie *zombieHorde (int N, std::string name);

#endif