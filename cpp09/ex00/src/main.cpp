#include "BitcoinExchange.hpp"

int BitcoinExchange::dateFormat(std::string date)
{
    if (date.length() != 10)
        return 1;
    if (date[4] != '-' || date[7] != '-')
        return 1;
    if (date[0] < '0' || date[0] > '9' || date[1] < '0' || date[1] > '9' || date[2] < '0' || date[2] > '9' || date[3] < '0' || date[3] > '9')
        return 1;
    if (date[5] < '0' || date[5] > '1' || date[6] < '0' || date[6] > '9')
        return 1;
    if (date[5] == '1' && (date[6] < '0' || date[6] > '2'))
        return 1;
    if (date[8] < '0' || date[8] > '1' || date[9] < '0' || date[9] > '9')
        return 1;
    if (date[8] == '1' && (date[9] < '0' || date[9] > '2'))
        return 1;
    return 0;
}

int BitcoinExchange::checkLine(std::string date, std::string value)
{
    if (dateFormat(date) == 1)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 1;
    }
    if (value.find_first_not_of("-"))
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 1;
    }
    if (std::stof(value) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 1;
    }
    return 0;
}

void BitcoinExchange::findClosestDate(std::string date, std::string value)
{
    std::string closestDate;
    float closestPrice = 0;
    int day = std::stoi(date.substr(8, 2));
    int month = std::stoi(date.substr(5, 2));
    int year = std::stoi(date.substr(0, 4));
    while (1)
    {
        if (day > 1)
            day--;
        else if (month > 1)
        {
            month--;
            day = 31;
        }
        else
        {
            year--;
            month = 12;
            day = 31;
        }
        std::string dateToFind = std::to_string(year) + "-" +
                (std::to_string(month).length() == 1 ? ("0" + std::to_string(month)) : (std::to_string(month))) + "-" +
                (std::to_string(day).length() == 1 ? ("0" + std::to_string(day)) : (std::to_string(day)));
        if (_data.find(dateToFind) != _data.end())
        {
            closestDate = dateToFind;
            closestPrice = stof(_data.find(dateToFind)->second);
            break;
        }
        if (year <= 2009 && month <= 1 && day <= 2)
            break;
    }
    std::cout << date << " => " << value << " = " << std::stof(value) * closestPrice << std::endl;
}

void BitcoinExchange::readFile(std::string const &filename)
{
    int lineNumber = 0;
    std::ifstream dataBit(filename);
    for (std::string line; std::getline(dataBit, line); )
    {
        if (lineNumber == 0)
        {
            lineNumber++;
            continue;
        }
        std::string date = line.substr(0, line.find(" | "));
        std::string value = line.substr(line.find(" | ") + 3, line.length());
        if (checkLine(date, value) == 0)
        {
            if (_data.find(date) != _data.end())
                std::cout << date << " => " << value << " = " << std::stof(_data.find(date)->second) * std::stof(value) << std::endl;
            else
                findClosestDate(date, value);
        }
    }
}

void BitcoinExchange::saveMap()
{
    std::ifstream dataBit("src/data.csv");
    for (std::string line; std::getline(dataBit, line); )
        _data.insert(std::pair<std::string, std::string>(line.substr(0, line.find(',')),
                                                         line.substr(line.find(',') + 1, line.length())));
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange(){
    _data.clear();
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    } else {
        BitcoinExchange exchange;
        exchange.saveMap();
        exchange.readFile(argv[1]);
    }
}