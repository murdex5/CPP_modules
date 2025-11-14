/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:34:40 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 15:34:42 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/SedL.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Usage: ./SedL ./filename s1 s2" << std::endl;
        return EXIT_FAILURE;
    }
    std::string myStrng;

    std::ifstream MyReadFile(argv[1]);

    while (std::getline(MyReadFile, myStrng))
    {
        std::cout << myStrng << std::endl;
    }
    MyReadFile.close();
    return EXIT_SUCCESS;
}