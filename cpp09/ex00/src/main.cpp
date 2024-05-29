#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
        return 1;
    }

	btc exchange("data.csv");
	std::string filename = argv[1];
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		throw std::runtime_error("Could not open file: " + filename);
	}

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string date, value;
		if (std::getline(ss, date, '|') && std::getline(ss, value))
		{
			date = trim(date);
			value = trim(value);
			if (exchange.isDateFormatValide(date))
			{
				if (exchange.isValidValue(value))
				{
					float btcValue = static_cast<float>(std::atof(value.c_str()));
					float rate = exchange.getExchangeRate(date);
					std::cout << date << " => " << btcValue << " = " << rate * btcValue << std::endl;
				}
			}
			else
				std::cout << "Error: bad date => " << date << std::endl;
		}
		else 
			std::cout << "Error: bad input => " << line << std::endl;
	
	}
	return 0;
}
