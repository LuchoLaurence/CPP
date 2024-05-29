#include "BitcoinExchange.hpp"

btc::btc() {}

btc::~btc() {}

btc::btc(const std::string filename)
{
	loadExchangeRates(filename);
}

btc::btc(const btc & cpy) {
	if (this == &cpy)
		return ;
	return;
}

btc & btc::operator=(const btc & other) {
	if (this == &other)
		return (*this);
	return (*this);
}

bool btc::isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool btc::isValidDate(int year, int month, int day)
{
	if (year < 1 || month < 1 || month > 12 || day < 1)
		return false;
	
	int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(year) && month == 2)
		return day <= 29;

	return (day <= dayInMonth[month - 1]);
}

bool btc::isDateFormatValide(const std::string& str) 
{
	if (str.length() != 10)
		return false;
	
	int year, month, day;
	char delimiter, delimiter2;

	int result = sscanf(str.c_str(), "%4d%c%2d%c%2d", &year, &delimiter, &month, &delimiter2, &day);
	if (result != 5 || delimiter != '-' || delimiter2 != '-')
		return false;

	return (isValidDate(year, month, day));
}

bool btc::isValidValue(const std::string value) const 
{
	char* end;
    float val = std::strtod(value.c_str(), &end);

    if (end == value.c_str() || *end != '\0') {
		std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
	if (val > 1000)
		std::cout << "Error: too large a number." << std::endl;
	if (val < 0)
		std::cout << "Error: not a positive number." << std::endl;
    return val >= 0 && val <= 1000;
}

float btc::getExchangeRate(const std::string & date) const
{
	std::map<std::string, float>::const_iterator it = exchangeRate.lower_bound(date);
	if (it != exchangeRate.end() && it->first == date) {
        // Retourne la valeur associée à la clé trouvée
        return it->second;
	}
	if (it != exchangeRate.begin()) 
		--it;

	return it->second;
}

void btc::loadExchangeRates(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Could not open file: " + filename);
	}
	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string date, rate;
		if (std::getline(ss, date, ',') && std::getline(ss, rate))
		{
			date = trim(date);
			rate = trim(rate);
			exchangeRate[date] = static_cast<float>(std::atof(rate.c_str()));
		}
	}
	file.close();
}
