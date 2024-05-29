#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

//includes
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>

//classes

class btc {
	public :

		btc();
		btc(const std::string filename);
		~btc();
		btc(const btc & cpy);
		btc & operator=(const btc & other);
		
		bool isLeapYear(int year);
		bool isValidDate(int year, int month, int day);
		bool isDateFormatValide(const std::string& str);
		bool isValidValue(const std::string value) const;
		
		float getExchangeRate(const std::string & date) const;


	private :
		std::map<std::string, float> exchangeRate;
		void loadExchangeRates(const std::string &filename);
};

inline std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r\f\v");
    size_t last = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(first, (last - first + 1));
}

#endif
