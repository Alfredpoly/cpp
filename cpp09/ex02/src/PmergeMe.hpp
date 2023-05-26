#ifndef CPP_PMERGEME_HPP
#define CPP_PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <list>
#include <chrono>

class PmergeMe {
    private:
        std::vector<int> _vec;
        std::list<int> _list;
    public:
        explicit PmergeMe();
        ~PmergeMe();
        void sortWithVector(char **argv);
        void sortWithList(char **argv);
        void merge(std::list<int>& list1, std::list<int>& list2);
        void sortList(std::list<int>& inputList);
        void printList();
        void printVector();
        void sortVector(std::vector<int>& vec, int low, int high);
        void mergeVector(std::vector<int>& vec, int low, int mid, int high);
        std::list<int> getList() const;
        std::vector<int> getVec() const;
};

#endif //CPP_PMERGEME_HPP
