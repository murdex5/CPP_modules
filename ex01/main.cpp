/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:36:52 by kadferna          #+#    #+#             */
/*   Updated: 2025/10/15 22:36:54 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Phonebook.hpp"

std::string get_input()
{
    std::string input; 

    std::cout << "Enter the command here: ";
    std::getline(std::cin, input);
    return input;
}

int main(void)
{
    Phonebook book;
    std::string input;
    std::string str_index;
    int i;

    while (1)  {
        input = get_input();
        if (input.compare("ADD") || input.compare("SEARCH") || input.compare("EXIT")) {
            if (input.compare("ADD") == 0) {
                book.add_contact();
            } else if (input.compare("SEARCH") == 0) {
                std::cout << "Enter the index: ";
                std::getline(std::cin, str_index);
                std::stringstream ss(str_index);
                if (ss << i) {
                    i = 0;
                }
                if (i <= 8 || i >= 0) {
                    book.display_contact(i);
                } else {
                    std::cout << "Please enter a valid index." << std::endl;
                }
            } else if (input.compare("EXIT") == 0) {
                std::cout << "Program is exiting!!!" << std::endl;
                return 0;
            }
        }
        else
            std::cout << "Please enter a valid commad [ADD, SEARCH, EXIT]" << std::endl;

    }
    return 0;
}
