/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:01:12 by kadferna          #+#    #+#             */
/*   Updated: 2025/10/13 13:05:59 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>
#include "./Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int contact_count;
        int oldest_index;
    
    public:
        Phonebook();
		void add_contact();
		//void search_contact() const;
		void display_contact(int index) const;
};

#endif
