/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:44:27 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:34:51 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Animal.hpp"
#include "../INCLUDES/WrongAnimal.hpp"
#include "../INCLUDES/Dog.hpp"
#include "../INCLUDES/Cat.hpp"
#include "../INCLUDES/WrongCat.hpp"
#include "../INCLUDES/Brain.hpp"

int main ( void ) {
    Brain myBrain;

    std::cout << "========= Testing Brain Class =========" << std::endl;
    
    // Set some ideas
    myBrain.setIdea("I should eat some fish.", 0);
    myBrain.setIdea("I need to sleep.", 1);
    myBrain.setIdea("Time to play!", 2);

    // Retrieve and print ideas
    std::cout << "Idea 0: " << myBrain.getIdea(0) << std::endl;
    std::cout << "Idea 1: " << myBrain.getIdea(1) << std::endl;
    std::cout << "Idea 2: " << myBrain.getIdea(2) << std::endl;

    std::cout << "\n========= Testing Brain Copy =========" << std::endl;
    
    // Test copy constructor
    Brain copiedBrain(myBrain);
    std::cout << "Copied Brain Idea 0: " << copiedBrain.getIdea(0) << std::endl;
    
    // Modify the original brain to prove it's a deep copy (changes shouldn't affect copiedBrain)
    myBrain.setIdea("I want to go outside.", 0);
    
    std::cout << "Original Brain Idea 0 after change: " << myBrain.getIdea(0) << std::endl;
    std::cout << "Copied Brain Idea 0 after change: " << copiedBrain.getIdea(0) << std::endl;

    return 0;
}