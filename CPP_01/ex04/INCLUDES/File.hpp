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
        std::string fileName;
        std::string oldString;
        std::string newString;
        std::vector<std::string>& fileContent;
        void processFileName();
    public:
        File(std::string _fileName, std::string _oldString, std::string  _newString, std::vector<std::string>& fc) :
                fileName(_fileName), oldString(_oldString), newString(_newString), fileContent(fc) {};
        ~File();
        void processFileContent();
        const char *getFileName();
        std::vector<std::string>& getFileContent();
};



#endif