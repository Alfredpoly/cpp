#include "PmergeMe.hpp"

void PmergeMe::sortWithVector(char **argv)
{
    argv++;
    while (*argv) {
        if (std::stoi(*argv) < 0) {
            std::cout << "Error" << std::endl;
            return;
        }
        _vec.push_back(std::stoi(*argv));
        argv++;
    }
    std::sort(_vec.begin(), _vec.end());
}

std::vector<int> PmergeMe::getVec() const {
    return _vec;
}

void PmergeMe::sortList() {
    while
}

void PmergeMe::sortWithList(char **argv) {
    argv++;
    while (*argv) {
        if (std::stoi(*argv) < 0) {
            std::cout << "Error" << std::endl;
            return;
        }
        _list.push_back(std::stoi(*argv));
        argv++;
    }
    sortList();
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {
    _vec.clear();
    _list.clear();
}