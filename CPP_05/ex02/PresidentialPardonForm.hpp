/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:42 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/17 14:03:59 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    /* Constructors and Destructors */
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    ~PresidentialPardonForm();

    /* Operators */
    PresidentialPardonForm const &operator=(PresidentialPardonForm const &other);

    /* Member fucntions */
    void beExecuted(Bureaucrat const &bureaucrat) const;
};

std::ostream &operator<<(std::ostream &str, PresidentialPardonForm const &form);

#endif