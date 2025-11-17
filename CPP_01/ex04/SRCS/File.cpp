/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:49:17 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/14 11:49:18 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/File.hpp"

File::~File()
{
    std::cout << fileName << " is being removed." << std::endl;
}

void File::processFileName()
{
    fileName = fileName + ".replace";
}

void File::processFileContent()
{
    for (size_t i = 0; i < fileContent.size(); i++)
    {
        fileContent[i] = swapVals(fileContent[i], oldString, newString);
    }
}

const char *File::getFileName()
{
    processFileName();
    return fileName.c_str();
}

std::vector<std::string>& File::getFileContent()
{
    processFileContent();
    return fileContent;
}