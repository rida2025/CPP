/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:37:28 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 14:27:49 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void    findandreplace(std::string filename, std::string stofind, std::string storeplace)
{
    std::string line;
    std::fstream ofile;
    std::fstream ifile;
    size_t position;
    ifile.open(filename, std::ios::in);
    if (!ifile.is_open())
        exit(2);
    ofile.open(filename+".replace", std::ios::in | std::ios::out | std::ios::trunc);
    if (!ofile.is_open())
        exit(3);
    while (std::getline(ifile, line))
    {
        position = line.find(stofind);
        while (position != std::string::npos && !stofind.empty())
        {
            line.erase(position, stofind.length());
            line.insert(position, storeplace);
            position = line.find(stofind, position+storeplace.length());
        }
        ofile << line;
        if (!ifile.eof())
			ofile << std::endl;
    }
    ifile.close();
    ofile.close();
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return 1;
    findandreplace(argv[1], argv[2], argv[3]);
    return 0;
}