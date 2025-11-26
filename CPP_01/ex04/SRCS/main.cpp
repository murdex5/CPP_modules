/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:34:40 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/13 15:34:42 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/SedL.hpp"

std::string swapVals(std::string line, std::string s1, std::string s2)
{
    std::string newLine;
    for (size_t i = 0; i < line.size(); i++)
    {
        if (line[i] == s1[0]) {
            size_t count = 0;;
            bool h = true;
            int f = i;

            while (h == true && s1.size() > count)
            {
                if (line[f] == s1[count])
                {
                    f++;
                    count++;
                } else {
                    h = false;
                    newLine += line[i];
                }
            }
            if (h == true)
            {
                if (line[f+1] != ' ') {
                    count = 0;
                    while (s2.size() > count)
                    {
                        newLine += s2[count];
                        count++;
                    }
                    i = f - 1;
                }
            }
        } else {
            newLine += line[i];
        }
    }
    return newLine;
}

int main(int argc, char *argv[])
{
    std::string myStrng;
    std::vector<std::string> lines;

    if (argc != 4)
    {
        std::cout << "Usage: ./SedL ./filename s1 s2" << std::endl;
        return EXIT_FAILURE;
    }
    // Reading the fiile
    std::ifstream MyReadFile(argv[1]);
    if (!MyReadFile.is_open())
    {
        std::cout << "Error \nFile: " << argv[1] << " does not exsist or cannot be opened."<< std::endl;
        return EXIT_FAILURE;
    }
    while (std::getline(MyReadFile, myStrng))
    {
        lines.push_back(myStrng);
        lines.push_back("\n");
    }
    MyReadFile.close();
    File WriteFile(argv[1], argv[2], argv[3], lines);
    std::ofstream MyWriteFile(WriteFile.getFileName());
    std::vector<std::string> _modLines = WriteFile.getFileContent();
    for (size_t i = 0; i < _modLines.size(); i++)
    {
        MyWriteFile << _modLines[i];
    }
    MyWriteFile.close();
    return EXIT_SUCCESS;
}