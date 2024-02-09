/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:49:32 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/26 07:49:32 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (std::cout << "Error, args are incorret" << std::endl, 1);
	
	std::string	s1(argv[2]);
	if (s1.empty())
		return (std::cout << "String 1 cannot be empty" << std::endl, 1);

	std::string	s2(argv[3]);
	if (s2.empty())
		return (std::cout << "String 2 cannot be empty" << std::endl, 1);


	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
		return (std::cout << "Error, file could not be opened" << std::endl, 1);
	
	std::string fichierDestStr = std::string(argv[1]) + ".replace";
	const char*	fichierDest = fichierDestStr.c_str();

	std::ofstream ofs(fichierDest);
	if (!ofs.is_open())
		return (std::cout << "Error, file could not be created" << std::endl, 1);



	std::string	line;
	while (std::getline(ifs >> std::ws, line))
	{
		size_t pos = 0;
		size_t length = s1.size();
		while(pos != std::string::npos)
		{
			pos = line.find(s1);
			if (pos == std::string::npos)
				break;
			line.erase(pos, length);
			line.insert(pos, s2);
		}
		ofs << line;
	}
	ifs.close();
	ofs.close();
	
	return 0;
}