/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:29:30 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/12 11:29:32 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *zHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zHorde[i].setName(name);
        zHorde[i].announce();
    }
    return zHorde;
}