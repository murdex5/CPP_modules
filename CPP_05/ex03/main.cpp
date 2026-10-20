/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:59 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/20 12:28:57 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

    ShrubberyCreationForm shrubbery("Home");
    RobotomyRequestForm robo("Peter");
    PresidentialPardonForm pardon("Obama");

    Bureaucrat helen("Helen Joshea", 150);
    Bureaucrat todd("Micheal Todd", 120);
    Bureaucrat middle("Middle Manager", 60);
    Bureaucrat patrick("Patrick Steward", 3);

    // BLOCK 1: execute unsigned forms, must fail with "not signed"
    std::cout << "\n-------------------------------------\n\n";
    std::cout << "Try to execute forms without being signed\n\n";
    std::cout << helen << '\n'
              << shrubbery << '\n'
              << robo << '\n'
              << pardon << '\n';

    helen.executeForm(shrubbery);
    helen.executeForm(robo);
    helen.executeForm(pardon);

    // Also prove execute() throws when called directly (not via executeForm)
    std::cout << "\n-- direct execute() on unsigned form --\n";
    try
    {
        shrubbery.execute(helen);
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << '\n';
    }

    // BLOCK 2: Sign failures and signed-but-cannot-execute edge case

    std::cout << "\n-------------------------------------\n\n";
    std::cout << "Sign failures and signed-but-cannot-execute\n\n";
    std::cout << helen << '\n'
              << middle << '\n'
              << robo << '\n';

    helen.signForm(robo);

    middle.signForm(robo);
    middle.executeForm(robo);
    std::cout << robo << '\n';

    // BLOCK 3: sign everything with Patrick (grade 3) and execute all

    std::cout << "\n-------------------------------------\n\n";
    std::cout << "Sign all forms and execute them\n\n";

    shrubbery.beSigned(patrick);
    robo.beSigned(patrick);
    pardon.beSigned(patrick);

    std::cout << shrubbery << '\n'
              << robo << '\n'
              << pardon << '\n';

    std::cout << "\n --------------------- \n\n";
    patrick.executeForm(shrubbery);

    std::cout << "\n-- contents of Home_shrubbery --\n";
    {
        std::ifstream f("Home_shrubbery");
        if (f.is_open())
        {
            std::cout << f.rdbuf();
            f.close();
        }
        else
        {
            std::cout << "(file not found!)\n";
        }
    }

    std::cout << "\n --------------------- \n\n";
    patrick.executeForm(robo);

    // Show 50/50 actually varies
    std::cout << "\n-- robotomy repeated 8 times --\n";
    for (int i = 0; i < 8; ++i)
        patrick.executeForm(robo);

    std::cout << "\n --------------------- \n\n";
    patrick.executeForm(pardon);

    std::cout << "\n-------------------------------------\n\n";
    std::cout << "End of test\n\n";
    std::cout << "-------------------------------------\n\n";
    return 0;
}