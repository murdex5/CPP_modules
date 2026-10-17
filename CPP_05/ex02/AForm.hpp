/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:53:28 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/17 14:04:08 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _executeGrade;

public:
    // Constructors
    AForm();
    AForm(std::string const &name, int const &signGrade, int const &execGrade);
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);
    ~AForm();

    // Member Functions

    std::string const &getName(void) const;
    bool const &getIsSigned(void) const;
    int const &getSignGrade(void) const;
    int const &getExecGrade(void) const;

    // Bureaucrat Member functions
    void beSigned(Bureaucrat &bureaucrat);

    // Execptions
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif