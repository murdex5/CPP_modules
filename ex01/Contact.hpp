/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:05:26 by kadferna          #+#    #+#             */
/*   Updated: 2025/10/13 13:05:30 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <utility>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
		Contact()
			: first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {};
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
			: first_name(std::move(fn)), last_name(std::move(ln)), nickname(std::move(nn)), 
				phone_number(std::move(pn)), darkest_secret(std::move(ds)) {};
		
		const std::string& getFirstName() const { return  first_name; };
		const std::string& getLastName() const { return last_name; };
		const std::string& getNickName() const { return nickname; };
		const std::string& getPhoneNumber() const { return phone_number; };
		const std::string& getDarkestSecret() const { return darkest_secret; };

		void setFirstName(const std::string& fn) { first_name = fn; };
		void setLastName(const std::string& ln) { last_name = ln; };
		void setNickName(const std::string& nn) { nickname = nn; };
		void setPhoneNumber(const std::string& pn) { phone_number = pn; };
		void setDarkestSecret(const std::string& ds) { darkest_secret = ds; };
};
