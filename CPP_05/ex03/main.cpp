/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:59 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 11:54:54 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someIntern;
    Bureaucrat boss("Bossman", 1);

    // Test 1 all three valid names;

    std::cout << "\n==== Valid names\n";
    {
        AForm *a = someIntern.makeForm("ShrubberyCreationForm", "garden");
        AForm *b = someIntern.makeForm("RobotomyRequestForm", "Bender");
        AForm *c = someIntern.makeForm("PresidentialPardonForm", "Zaphod");

        if (a)
            std::cout << *a << std::endl;
        if (b)
            std::cout << *b << std::endl;
        if (c)
            std::cout << *c << std::endl;

        delete a;
        delete b;
        delete c;
    }

    std::cout << "\n-------------------------------------\n\n";
    std::cout << "End of test\n\n";
    std::cout << "-------------------------------------\n\n";
    return 0;
}