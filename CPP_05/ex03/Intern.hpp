/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:39:30 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 11:12:35 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern(void);

    AForm *makeForm(const std::string form_name, const std::string target);
};

#endif