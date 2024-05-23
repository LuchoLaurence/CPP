#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
	if (argc < 2) {
		std::cerr << "Error : a file is required to execute the program!" << std::endl;
		return 1;
	}
	if (argc > 2)
	{
		std::cerr << "Error : too may arguments!" << std::endl;
		return 1;
	}
	std::string fileName(argv[1]);
	std::cout << "hey : " << fileName << std::endl;
	std::ifstream file(fileName);
	if (!file)
	{
		std::cerr << "Error : file could not be opened!" << std::endl;
		return 1;
	}
	std::string line;
	std::getline(file, line);
	return 0;
}
