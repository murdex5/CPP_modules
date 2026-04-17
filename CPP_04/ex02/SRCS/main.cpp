/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:44:27 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:53:39 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/AAnimal.hpp"
#include "../INCLUDES/WrongAnimal.hpp"
#include "../INCLUDES/Dog.hpp"
#include "../INCLUDES/Cat.hpp"
#include "../INCLUDES/WrongCat.hpp"
#include "../INCLUDES/Brain.hpp"

int main ( void ) {
        
    std::cout << "--- 1. Testing Instantiation (Should fail if uncommented) ---" << std::endl;
    // UNCOMMENTING ANY OF THESE LINES SHOULD CAUSE A COMPILER ERROR:
    // AAnimal test1; 
    // AAnimal* test2 = new AAnimal();
    std::cout << "Compilation will fail if AAnimal is instantiated. Abstract class works!" << std::endl;

    std::cout << "\n--- 2. Testing Polymorphism with AAnimal pointers ---" << std::endl;
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();
    
    std::cout << "\n--- 3. Testing sounds ---" << std::endl;
    dog->makeSound();
    cat->makeSound();
    
    std::cout << "\n--- 4. Testing Array of Animals (Half Dogs, Half Cats) ---" << std::endl;
    const int numAnimals = 4;
    AAnimal* animals[numAnimals];
    
    for (int i = 0; i < numAnimals / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; i++) {
        animals[i] = new Cat();
    }
    
    std::cout << "\nListening to the array of animals..." << std::endl;
    for (int i = 0; i < numAnimals; i++) {
        animals[i]->makeSound();
    }
    
    std::cout << "\n--- 5. Cleaning up ---" << std::endl;
    delete dog;
    delete cat;
    
    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }

    return 0;
}