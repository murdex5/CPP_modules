/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:44:02 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/14 11:44:03 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include "./SedL.hpp"

class File
{
    private:
        
    public:
        std::string fileName;
        std::string strOld;
        std::string strNew;
        File(std::string _fileName, std::string _strOld, std::string _strNew) : fileName(_fileName), strOld(_strOld), strNew(_strNew) {};
        ~File();
};



#endif