/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:11:51 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 13:11:52 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

    std::cout << "Memory address of String:    " << &string << std::endl;
    std::cout << "Memory address of StringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of StringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Value of String:             " << string << std::endl;
    std::cout << "Value of StringPTR:          " << *stringPTR << std::endl;
    std::cout << "Value of StringREF:          " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}