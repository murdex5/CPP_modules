/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:35:11 by kadferna          #+#    #+#             */
/*   Updated: 2026/11/17 15:38:47 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    std::string user_input;
    if (argc == 0)
        return 0;
    if (argv[1] && !argv[2])
    {
        user_input = argv[1];
        ScalarConverter::detectType(user_input);
    }
    else
        std::cout << "No arguments provided or too many" << std::endl;
}
