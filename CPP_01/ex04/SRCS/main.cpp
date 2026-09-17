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
	size_t	count;
	bool	h;
	int		f;

	std::string newLine;
	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] == s1[0])
		{
			count = 0;
			;
			h = true;
			f = i;
			while (h == true && s1.size() > count)
			{
				if (line[f] == s1[count])
				{
					f++;
					count++;
				}
				else
				{
					h = false;
					newLine += line[i];
				}
			}
			if (h == true)
			{
				if (line[f + 1] != ' ')
				{
					count = 0;
					while (s2.size() > count)
					{
						newLine += s2[count];
						count++;
					}
					i = f - 1;
				}
			}
		}
		else
		{
			newLine += line[i];
		}
	}
	return (newLine);
}

int	main(int argc, char *argv[])
{
	std::string myStrng;
	size_t len;
	size_t index;

	if (argc != 4)
	{
		std::cout << "Usage: ./SedL ./filename s1 s2" << std::endl;
		return (EXIT_FAILURE);
	}
	// Reading the fiile
	std::ifstream countFile(argv[1]);
	if (!countFile.is_open())
	{
		std::cout << "Error \nFile: " << argv[1] << " does not exsist or cannot be opened." << std::endl;
		return (EXIT_FAILURE);
	}
	len = 0;
	while (std::getline(countFile, myStrng))
	{
		len++;
	}
	countFile.close();
	std::string *lines = new std::string[len * 2];
	std::string *modLines = new std::string[len * 2];
	std::ifstream MyReadFile(argv[1]);
	index = 0;
	if (!MyReadFile.is_open())
	{
		std::cout << "Error \nFile: " << argv[1] << " does not exsist or cannot be opened." << std::endl;
		return (EXIT_FAILURE);
	}
	while (std::getline(MyReadFile, myStrng))
	{
		lines[index] = myStrng;
		lines[index + 1] = "\n";
		index += 2;
	}
	MyReadFile.close();
	size_t totalLines = len * 2;
	for (size_t i = 0; i < totalLines; i++)
	{
		modLines[i] = lines[i];
		if (lines[i] != "\n")
		{
			size_t pos = 0;
			std::string s1 = argv[2];
			std::string s2 = argv[3];

			while ((pos = modLines[i].find(s1, pos)) != std::string::npos)
			{
				modLines[i].erase(pos, s1.length());
				modLines[i].insert(pos, s2);
				pos += s2.length();
			}
		}
	}

	std::string outputFilename = std::string(argv[1]) + ".replace";
	std::ofstream MyWriteFile(outputFilename.c_str());
	for (size_t i = 0; i < totalLines; i++)
	{
		MyWriteFile << modLines[i];
	}
	MyWriteFile.close();

	delete[] lines;
	delete[] modLines;

	return (EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}
