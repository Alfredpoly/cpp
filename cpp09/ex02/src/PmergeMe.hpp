#ifndef CPP_PMERGEME_HPP
#define CPP_PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <list>

class PmergeMe {
    private:
        std::vector<int> _vec;
        std::list<int> _list;
    public:
        explicit PmergeMe();
        ~PmergeMe();
        void sortWithVector(char **argv);
        void sortWithList(char **argv);
        std::vector<int> getVec() const;
};

#endif //CPP_PMERGEME_HPP
