/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:13:53 by kadferna          #+#    #+#             */
/*   Updated: 2026/09/11 13:13:55 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    // Constructors
    Bureaucrat(void);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat(void);

    // Member Functions
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);

    // Functsion for Form
    void signForm(Form &form);

    // Exceptions
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif
