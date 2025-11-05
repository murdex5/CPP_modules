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
# define PHONEBOOK_HPP

# include "./Contact.hpp"
# include <iomanip>
# include <sstream>

class Phonebook
{
    private:
    int contact_count;
	int oldest_index;

  public:
	Contact contacts[8];
	Phonebook();
	void add_contact();
	// void search_contact() const;
	void display_contact(int index) const;
    int getContactCount() const { return contact_count; };
    int getOldestIndex() const { return oldest_index; };
};

#endif
