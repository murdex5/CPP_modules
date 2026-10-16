/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:21 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/16 12:48:25 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;

public:
    /* Constructors and Destructors */
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    ~RobotomyRequestForm();

    /* Operators */
    RobotomyRequestForm const &operator=(RobotomyRequestForm const &other);

    /* Member fucntions */
    void beExecuted(Bureaucrat const &bureaucrat) const;
};

std::ostream &operator<<(std::ostream &str, RobotomyRequestForm const &form);

#endif