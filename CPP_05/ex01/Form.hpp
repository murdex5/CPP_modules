/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:49:57 by kadferna          #+#    #+#             */
/*   Updated: 2026/09/17 13:49:57 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _is_signed;
    const int _sign_grade;
    const int _execute_grade;

public:
    // Constructors
    Form();
    Form(const std::string name, const int is_signed, const int execute_grade);
    Form(const Form &other);
    Form &operator=(const Form &other);
    ~Form();

    // Member Functions

    void getSigned(const Bureaucrat &bureaucrat);
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGerade() const;
    int getExecuteGrade() const;

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

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif