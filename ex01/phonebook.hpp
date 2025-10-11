/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:01:12 by kadferna          #+#    #+#             */
/*   Updated: 2025/10/11 13:01:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>


class Phonebook {
    private:
        char *darksest_secret;
    public:
        char *fist_name;
        char *last_name;
        float phonenumber;
        char *nickname;
};

#endif