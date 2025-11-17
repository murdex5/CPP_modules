/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:33:49 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/14 14:33:50 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

int main(void)
{
    std::srand(std::time(0));
    std::string myWords[7] = {
        "Need to Swap", 
        "Swap Need?", 
        "Swap the Need", 
        "Swap", 
        "Let's swap seats so you can see the screen better.",
        "Memory swap operations can impact performance significantly.",
        "Swap Now?"
    };
    std::ofstream ReadFile("./ReadFile");
    for (int i = 0; i < 1000; i++)
    {
        int j = std::rand() % 7;
        ReadFile <<  myWords[j] << "\n";
    }
    ReadFile.close();

}