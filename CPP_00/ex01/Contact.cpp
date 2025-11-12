/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:24:43 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/10 11:24:44 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool Contact::setPhoneNumber(const std::string& pn)
{
    int i;
	for (i = 0; pn[i] != '\0'; i++)
	{
		if (!isdigit(pn[i]))
		{
			std::cout << "Please only put numbers" << std::endl;
            return false;
		}
	}
    if (i < 10 || i > 15)
    {
        std::cout << "Please enter a valid number. [10-15 numbers]" << std::endl;
        return false;
    }
	phone_number = pn;
    return true;
}