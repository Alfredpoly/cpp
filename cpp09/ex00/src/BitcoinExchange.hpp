#ifndef CPP_BITCOINEXCHANGE_HPP
#define CPP_BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, std::string> _data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void readFile(std::string const &filename);
        void saveMap();
        int checkLine(std::string date, std::string value);
        int dateFormat(std::string date);
        void findClosestDate(std::string date, std::string value);
};

#endif //CPP_BITCOINEXCHANGE_HPP
