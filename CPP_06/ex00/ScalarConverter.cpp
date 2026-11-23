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

bool ScalarConverter::is_char(const std::string &literal)
{
    return (literal.length() == 1 && !(literal[0] >= '0' && literal[0] <= '9'));
}

bool ScalarConverter::is_int(const std::string &literal)
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

bool ScalarConverter::is_float(const std::string &literal)
{
    size_t len;
    size_t i;
    size_t digits;

    len = literal.length();
    i = 0;
    digits = 0;

    if (len < 3 || (literal[len - 1] != 'f' && literal[len - 1] != 'F'))
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

bool ScalarConverter::is_double(const std::string &literal)
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
    if (dbd == 0 && dad == 0)
        return false;
    return true;
}

void ScalarConverter::detectType(const std::string &literal)
{
    if (handle_pseudo_literals(literal))
        return;
    if (is_char(literal))
        literal_to_char(literal);
    else if (is_int(literal))
        literal_to_int(literal);
    else if (is_float(literal))
        literal_to_float(literal);
    else if (is_double(literal))
        literal_to_double(literal);
    else
        std::cout << "Invalid literal" << std::endl;
}

bool ScalarConverter::handle_pseudo_literals(const std::string &literal)
{
    std::string charMsg = "char: impossible";
    std::string intMsg = "int: impossible";

    if (literal == "nanf" || literal == "nan")
    {
        std::cout << charMsg << std::endl
                  << intMsg << std::endl;
        std::cout << "float: nanf" << std::endl
                  << "double: nan" << std::endl;
        return (true);
    }
    else if (literal == "-inff" || literal == "-inf")
    {
        std::cout << charMsg << std::endl
                  << intMsg << std::endl;
        std::cout << "float: -inff" << std::endl
                  << "double: -inf" << std::endl;
        return (true);
    }
    else if (literal == "inff" || literal == "inf" || literal == "+inff" || literal == "+inf")
    {
        std::cout << charMsg << std::endl
                  << intMsg << std::endl;
        std::cout << "float: inff" << std::endl
                  << "double: inf" << std::endl;
        return (true);
    }
    return (false);
}

void ScalarConverter::literal_to_char(const std::string &literal)
{
    unsigned char c;

    c = static_cast<unsigned char>(literal[0]);
    std::cout << "char: ";
    if (c > 127)
        std::cout << "impossible" << std::endl;
    else if (c < 32 || c == 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::literal_to_int(const std::string &literal)
{
    size_t i;
    bool neg;
    double d;

    i = 0;
    neg = false;
    d = 0.0;
    if (literal[i] == '+' || literal[i] == '-')
    {
        neg = (literal[i] == '-');
        i++;
    }
    while (i < literal.length())
    {
        d = d * 10.0 + (literal[i] - '0');
        i++;
    }
    if (neg)
        d = -d;
    std::cout << "char: ";
    if (d < 0 || d > 127)
        std::cout << "impossible" << std::endl;
    else if (d < 32 || d >= 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(static_cast<int>(d)) << "'" << std::endl;

    std::cout << "int: ";
    if (d < INT_MIN || d > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << "float: ";
    if (d > FLT_MAX || d < -FLT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;

    std::cout << "double: ";
    if (d > DBL_MAX || d < -DBL_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << d << std::endl;
}

void ScalarConverter::literal_to_double(const std::string &literal)
{
    double d;
    bool whole;

    if (handle_pseudo_literals(literal) == true)
        return;
    d = std::atof(literal.c_str());

    std::cout << "char: ";
    if (d <= -1.0 || d >= 128.0)
        std::cout << "impossible" << std::endl;
    else if (static_cast<int>(d) < 32 || static_cast<int>(d) == 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(static_cast<int>(d)) << "'" << std::endl;

    std::cout << "int: ";
    if (d <= -2147483649.0 || d >= 2147483648.0)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;

    whole = (d > -1e18 && d < 1e18 && d == static_cast<double>(static_cast<long>(d))) || d >= 1e18 || d <= -1e18;
    if (whole)
        std::cout << std::fixed << std::setprecision(1);

    std::cout << "float: ";
    if (d > FLT_MAX || d < -FLT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;

    std::cout << "double: " << d << std::endl;
}

void ScalarConverter::literal_to_float(const std::string &literal)
{
    double d;
    bool whole;

    if (handle_pseudo_literals(literal) == true)
        return;
    d = std::strtod(literal.c_str(), NULL);

    std::cout << "char: ";
    if (d <= -1.0 || d >= 128.0)
        std::cout << "impossible" << std::endl;
    else if (static_cast<int>(d) < 32 || static_cast<int>(d) == 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(static_cast<int>(d)) << "'" << std::endl;

    std::cout << "int: ";
    if (d <= -2147483649.0 || d >= 2147483648.0)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;

    whole = (d >= 1e18 || d <= -1e18 || d == static_cast<double>(static_cast<long>(d)));
    if (whole)
        std::cout << std::fixed << std::setprecision(1);

    std::cout << "float: ";
    if (d > FLT_MAX || d < -FLT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;

    std::cout << "double: " << d << std::endl;
}