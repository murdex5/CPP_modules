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
#include <sstream>

std::string get_input()
{
	std::string input;
	std::cout << "Enter the command here: ";
	std::getline(std::cin, input);
	return (input);
}

std::string intToString(int i)
{
    std::ostringstream temp;
    temp << i;
    return temp.str();
}

std::string printTruncated(const std::string &text, int width)
{
    if (width <= 0)
        return std::string();

    std::string truncated;
    if (text.length() > static_cast<std::size_t>(width))
        truncated = text.substr(0, width - 1) + ".";
    else
        truncated = text;

    std::ostringstream oss;
    oss << std::setw(width) << std::right << truncated;
    return oss.str();
}

std::string centerString(const std::string &text, int width)
{
	int	padding;
	int	left_padding;
	int	right_padding;

	std::string::size_type text_len = text.length();
	if (text_len >= static_cast<std::string::size_type>(width))
	{
		return (text.substr(0, width));
	}
	padding = width - static_cast<int>(text_len);
	left_padding = padding / 2;
	right_padding = padding - left_padding;
	return (std::string(left_padding, ' ') + text + std::string(right_padding,
			' '));
}

void	display_all(Phonebook book)
{
	const int	total_width = 45;

	std::cout << std::endl;
	std::cout << std::string(total_width, '-') << std::endl;
	std::cout << "|" << centerString("PHONEBOOK VOL 1", total_width - 2) << "|" << std::endl;
	std::cout << std::string(total_width, '-') << std::endl;
	std::cout << "|" << centerString("Index", 10)
        << "|" << centerString("First Name", 10)
        << "|" << centerString("Last Name", 10)
        << "|" << centerString("NickName", 10)
        << "|" << std::endl;
	std::cout << std::string(total_width, '-') << std::endl;
	if (book.getContactCount() <= 0)
		return ;
	for (int i = 0; i < book.getContactCount(); i++)
	{
		std::cout << "|" << centerString(intToString(i), 10) 
            << "|" << centerString(printTruncated(book.contacts[i].getFirstName(), 10), 10)
            << "|" << centerString(printTruncated(book.contacts[i].getLastName(), 10), 10)
            << "|" << centerString(printTruncated(book.contacts[i].getNickName(), 10), 10)
            << "|" << std::endl;
		std::cout << std::string(total_width, '-') << std::endl;
	}
	std::cout << std::endl;
}

void	add_entry(Phonebook book)
{
	int			i;

	std::string str_index;
	i = 0;
	std::cout << "Enter the index: ";
	std::getline(std::cin, str_index);
	std::stringstream ss(str_index);
	if (ss >> i)
	{
		if (i <= 8 && i >= 0)
			book.display_contact(i);
		else
		{
			std::cout << "Please enter a valid index. (0-8)" << std::endl;
			add_entry(book);
		}
	}
	else
	{
		std::cout << "Please enter a valid number." << std::endl;
		add_entry(book);
	}
};
int	main(void)
{
    Phonebook book;
	std::string input;

	std::cout << "The Commands: 'ADD', 'SEARCH', 'EXIT'" << std::endl;
	while (1)
	{
		input = get_input();
		if (input.compare("ADD") || input.compare("SEARCH")
			|| input.compare("EXIT"))
		{
			if (input.compare("ADD") == 0)
			{
				book.add_contact();
			}
			else if (input.compare("SEARCH") == 0)
			{
				display_all(book);
				add_entry(book);
			}
			else if (input.compare("EXIT") == 0)
			{
				std::cout << "Program is exiting!!!" << std::endl;
				return (0);
			}
		}
		else
			std::cout << "Please enter a valid commad [ADD, SEARCH, EXIT]" << std::endl;
	}
	return (0);
}
