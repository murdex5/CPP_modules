/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:01:11 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/26 10:01:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger "
                 "I really do!"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
                 "You didn’t put enough bacon in my burger! "
                 " If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
                 "I’ve been coming foryears, whereas you started working here just last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*fptr)(void);

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    fptr complains[5];
    complains[0] = &Harl::debug;
    complains[1] = &Harl::info;
    complains[2] = &Harl::warning;
    complains[3] = &Harl::error;
    complains[4] = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*complains[i])();
            return;
        }
    };
    std::cout << "[NO LEVEL]\nThere is no level \"" << level << "\"." << std::endl;
}

Harl::~Harl()
{
}