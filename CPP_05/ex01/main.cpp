/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:38:05 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/14 17:47:13 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "========== TEST 1: Valid bureaucrat and form ==========" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 50);
        Form taxForm("TaxForm", 40, 20);
        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        std::cout << "\n--- Bob tries to sign (grade 50 > 40, should FAIL) ---" << std::endl;
        bob.signForm(taxForm);

        std::cout << "\n--- Promoting Bob to grade 30 ---" << std::endl;
        for (int i = 0; i < 20; i++)
            bob.incrementGrade();
        std::cout << bob << std::endl;

        std::cout << "\n--- Bob tries to sign again (grade 30 <= 40, should SUCCEED) ---" << std::endl;
        bob.signForm(taxForm);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 2: Form grade too high ==========" << std::endl;
    try
    {
        Form badForm("BadForm", 0, 50);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 3: Form grade too low ==========" << std::endl;
    try
    {
        Form badForm("BadForm", 50, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 4: Bureaucrat grade too high ==========" << std::endl;
    try
    {
        Bureaucrat tooHigh("TooHigh", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 5: Bureaucrat grade too low ==========" << std::endl;
    try
    {
        Bureaucrat tooLow("TooLow", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 6: Increment past highest grade ==========" << std::endl;
    try
    {
        Bureaucrat top("Top", 1);
        std::cout << top << std::endl;
        top.incrementGrade(); // Should throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 7: Decrement past lowest grade ==========" << std::endl;
    try
    {
        Bureaucrat bottom("Bottom", 150);
        std::cout << bottom << std::endl;
        bottom.decrementGrade(); // Should throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== TEST 8: Copy constructor and assignment ==========" << std::endl;
    {
        Bureaucrat original("Original", 75);
        Bureaucrat copy(original);
        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy:     " << copy << std::endl;

        Bureaucrat assigned("Assigned", 100);
        assigned = original;
        std::cout << "Assigned: " << assigned << std::endl;
    }

    std::cout << "\n========== TEST 9: Signing an already signed form ==========" << std::endl;
    try
    {
        Bureaucrat signer("Signer", 10);
        Form form("ImportantForm", 20, 20);
        signer.signForm(form); // Success
        signer.signForm(form); // Already signed — beSigned will still succeed (sets to true again)
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}