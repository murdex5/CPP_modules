/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:00:54 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/26 10:00:55 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <cstdlib>
#include <string>

class Harl 
{
    private:
        void debug (void);
        void info (void);
        void warning (void);
        void error (void);
    public:
        Harl() {};
        ~Harl();
        void complain(std::string level);
};


#endif