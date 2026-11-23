/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:39:16 by kadferna          #+#    #+#             */
/*   Updated: 2026/11/17 15:39:18 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream> // to use cout
#include <string>   // to use string
#include <iomanip>  // to use setprecision
#include <cstdlib>  // to use atof
#include <climits>  // to use INT_MAX
#include <cfloat>   // to use FLT_MAX
#include <limits>   // to use numeric_limits
#include <cmath>    // Well... Maths!

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);

public:
    ScalarConverter &operator=(ScalarConverter const &src);
    ~ScalarConverter();
    static void detectType(const std::string &literal);
    static bool is_char(const std::string &literal);
    static bool is_int(const std::string &literal);
    static bool is_float(const std::string &literal);
    static bool is_double(const std::string &literal);
    static void literal_to_char(const std::string &literal);
    static void literal_to_int(const std::string &literal);
    static void literal_to_float(const std::string &literal);
    static void literal_to_double(const std::string &literal);
    static bool handle_pseudo_literals(const std::string &literal);
};

#endif
