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
    std::string mySelf[10] = {
        "Malsha's laughter brightens up the entire room like sunshine.\n",
    "With a creative mind and determined spirit, Malsha achieves her dreams.\n",
    "Malsha's kindness touches everyone she meets in beautiful ways.\n",
    "Adventurous at heart, Malsha loves exploring new places and cultures.\n",
    "Malsha's intelligence and wit make every conversation memorable.\n",
    "When Malsha sets a goal, nothing can stand in her way to success.\n",
    "Malsha's positive energy is contagious and inspires those around her.\n",
    "With a passion for learning, Malsha constantly grows and evolves.\n",
    "Malsha's friendship is a precious gift that everyone cherishes deeply.\n",
    "My name is Malsha and I'm proud of the person I've become.\n"
    };
    std::ofstream ReadFile("./ReadFile");
    for (int i = 0; i < 1000; i++) {
        int j = std::rand() % 7;
        ReadFile <<  myWords[j] << "\n";
    }
    ReadFile.close();
    std::ofstream ReadFile2("./ReadFile2");
    for (int i = 0; i < 10; i++) {
        ReadFile2 << mySelf[i];
    }
    ReadFile2.close();
    return 0;
}