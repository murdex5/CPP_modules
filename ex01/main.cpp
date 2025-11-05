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

void printTruncated(const std::string& text, int width) {
    if (text.length() > (size_t)width) {
        std::cout << std::setw(width) << std::right << text.substr(0, width - 1) + ".";
    } else {
        std::cout << std::setw(width) << std::right << text;
    }
}

std::string centerString(const std::string& text, int width) {
    std::string::size_type text_len = text.length();
    
    if (text_len >= static_cast<std::string::size_type>(width)) {
        return text.substr(0, width);
    }
    
    int padding = width - static_cast<int>(text_len);
    int left_padding = padding / 2;
    int right_padding = padding - left_padding;
    
    return std::string(left_padding, ' ') + text + std::string(right_padding, ' ');
}

void display_all(Phonebook book)
{
    const int total_width = 131;
    
     std::cout << std::string(total_width, '-') << std::endl;
    std::cout << "|" << centerString("First Name", 25) << "|" 
              << centerString("Last Name", 25) << "|" 
              << centerString("Nickname", 25) << "|" 
              << centerString("Phone Number", 25) << "|" 
              << centerString("DS", 25) << "|" << std::endl;
    std::cout << std::string(total_width, '-') << std::endl;
    
    if (book.getContactCount() <= 0)
        return;
    for(int i = 0; i < book.getContactCount(); i++) {
        std::cout << "|" << centerString(book.contacts[i].getFirstName(), 25) << "|" 
            << centerString(book.contacts[i].getLastName(), 25) << "|" 
            << centerString(book.contacts[i].getNickName(), 25) << "|" 
            << centerString(book.contacts[i].getPhoneNumber(), 25) << "|" 
            << centerString(book.contacts[i].getDarkestSecret(), 25) << "|" << std::endl;
        std::cout << std::string(total_width, '-') << std::endl;
    }
}


void add_entry(Phonebook book) {
    std::string str_index;
    int i = 0;

    std::cout << "Enter the index: ";
    std::getline(std::cin, str_index);
    std::stringstream ss(str_index);
    if (ss >> i) {
        if (i <= 8 && i >= 0) {
            book.display_contact(i);
        } else {
            std::cout << "Please enter a valid index. (0-8)" << std::endl;
            add_entry(book);
        }
    } else {
        std::cout << "Please enter a valid number." << std::endl;
        add_entry(book);
    }
};

int main(void)
{
    Phonebook book;
    std::string input;

    while (1)  {
        input = get_input();
        if (input.compare("ADD") || input.compare("SEARCH") || input.compare("EXIT")) {
            if (input.compare("ADD") == 0) {
                book.add_contact();
            } else if (input.compare("SEARCH") == 0) {
                display_all(book);
                add_entry(book);
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
