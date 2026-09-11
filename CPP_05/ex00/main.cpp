/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:14:06 by kadferna          #+#    #+#             */
/*   Updated: 2026/09/11 13:14:08 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== Default constructor ===" << std::endl;
    try
    {
        Bureaucrat b1;
        std::cout << b1;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Valid constructor ===" << std::endl;
    try
    {
        Bureaucrat b2("Alice", 42);
        std::cout << b2;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Grade too high (grade < 1) ===" << std::endl;
    try
    {
        Bureaucrat b3("Bob", 0);
        std::cout << b3;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Grade too low (grade > 150) ===" << std::endl;
    try
    {
        Bureaucrat b4("Charlie", 151);
        std::cout << b4;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Copy constructor ===" << std::endl;
    try
    {
        Bureaucrat original("Dave", 10);
        Bureaucrat copy(original);
        std::cout << "Original: " << original;
        std::cout << "Copy: " << copy;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Copy assignment ===" << std::endl;
    try
    {
        Bureaucrat a("Eve", 20);
        Bureaucrat b("Frank", 100);
        std::cout << "Before assignment:" << std::endl;
        std::cout << "a: " << a;
        std::cout << "b: " << b;

        b = a;

        std::cout << "After assignment:" << std::endl;
        std::cout << "a: " << a;
        std::cout << "b: " << b;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Increment grade ===" << std::endl;
    try
    {
        Bureaucrat inc("Grace", 2);
        std::cout << "Before: " << inc;
        inc.incrementGrade();
        std::cout << "After: " << inc;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Increment grade boundary (should throw) ===" << std::endl;
    try
    {
        Bureaucrat incFail("Henry", 1);
        std::cout << "Before: " << incFail;
        incFail.incrementGrade();
        std::cout << "After: " << incFail;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Decrement grade ===" << std::endl;
    try
    {
        Bureaucrat dec("Ivy", 149);
        std::cout << "Before: " << dec;
        dec.decrementGrade();
        std::cout << "After: " << dec;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Decrement grade boundary (should throw) ===" << std::endl;
    try
    {
        Bureaucrat decFail("Jack", 150);
        std::cout << "Before: " << decFail;
        decFail.decrementGrade();
        std::cout << "After: " << decFail;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
