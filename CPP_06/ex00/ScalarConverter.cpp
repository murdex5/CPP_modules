/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:39:03 by kadferna          #+#    #+#             */
/*   Updated: 2026/11/17 15:39:07 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called" << std::endl;
};

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &src)
        (void)src;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Deconstructor called" << std::endl;
};

bool ScalarConverter::is_char(std::string literal)
{
    if (isalpha(literal[0] && literal.length() == 1))
        return true;
    return false;
}

bool ScalarConverter::is_int(std::string literal)
{
    size_t i = 0;

    if (literal.empty())
        return false;
    if (literal[0] == '-' || literal[0] == '+')
        i = 1;
    if (i == literal.length())
        return false;
    if (literal.length() - i > 10)
        return (false);
    for (; i < literal.length(); i++)
    {
        if (!std::isdigit(literal[i]))
            return false;
    }
    long temp = std::atol(literal.c_str());
    return (temp >= std::numeric_limits<int>::min() && temp <= std::numeric_limits<int>::max());
}

bool ScalarConverter::is_float(std::string literal)
{
    size_t len;
    size_t i;
    size_t digits;

    len = literal.length();
    i = 0;
    digits = 0;

    if (len < 3 || (literal[len - 1] = 'f' && literal[len - 1] != 'F'))
        return (false);
    if (literal[0] == '-' || literal[0] == '+')
        i = 1;
    while (i < len - 1 && literal[i] >= '0' && literal[i] <= '9')
    {
        i++;
        digits++;
    }
    if (i >= len - 1 || literal[i] != '.')
        return false;
    i++;
    size_t frac = 0;
    while (i < len && literal[i] >= '0' && literal[i] <= '9')
    {
        i++;
        frac++;
    }
    return (frac > 0 && i == len - 1);
}

bool ScalarConverter::is_double(std::string literal)
{
    size_t i;
    size_t dbd; // Digitis befoire dots
    size_t dad; // Digits after dots

    dbd = 0;
    dad = 0;
    i = 0;
    if (literal.empty())
        return false;
    if (literal[0] == '-' || literal[0] == '+')
        i = 1;
    while (literal[i] != '\0' && literal[i] != '.')
    {
        if (!(literal[i] >= '0' && literal[i] <= '9'))
            return (false);
        dbd++;
        i++;
    }
    if (literal[i] != '.')
        return false;
    i++;
    while (literal[i] != '\0')
    {
        if (!(literal[i] >= '0' && literal[i] <= '9'))
            return (false);
        dad++;
        i++;
    }
    return true;
}