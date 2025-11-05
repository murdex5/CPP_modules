/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:52:06 by kadferna          #+#    #+#             */
/*   Updated: 2025/10/15 21:52:07 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"


Phonebook::Phonebook() : contact_count(0), oldest_index(0) {};

void Phonebook::add_contact() 
{
    Contact new_contact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    new_contact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    new_contact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    new_contact.setNickName(input);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, input);
    new_contact.setPhoneNumber(input);

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, input);
    new_contact.setDarkestSecret(input);

    if (contact_count < 8) {
        contacts[contact_count] = new_contact;
        contact_count++;
    } else {
        contacts[oldest_index] = new_contact;
        oldest_index = (oldest_index + 1) % 8;
    }
};

void Phonebook::display_contact(int index) const
{
    std::cout << "\n--- Contact Details ---" << std::endl;
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout<< "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
};
