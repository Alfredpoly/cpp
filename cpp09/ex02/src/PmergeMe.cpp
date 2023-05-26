#include "PmergeMe.hpp"

void PmergeMe::mergeVector(std::vector<int>& vec, int low, int mid, int high) {
    std::vector<int> temp(high - low + 1);
    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) {
        if (vec[i] <= vec[j]) {
            temp[k] = vec[i];
            ++i;
        } else {
            temp[k] = vec[j];
            ++j;
        }
        ++k;
    }

    while (i <= mid) {
        temp[k] = vec[i];
        ++i;
        ++k;
    }

    while (j <= high) {
        temp[k] = vec[j];
        ++j;
        ++k;
    }

    for (i = low; i <= high; ++i) {
        vec[i] = temp[i - low];
    }
}

void PmergeMe::sortVector(std::vector<int>& vec, int low, int high) {
        if (low < high) {
            if (high - low <= 16) {
                // Use insertion sort for small subarrays
                for (int i = low + 1; i <= high; ++i) {
                    int key = vec[i];
                    int j = i - 1;

                    while (j >= low && vec[j] > key) {
                        vec[j + 1] = vec[j];
                        --j;
                    }

                    vec[j + 1] = key;
                }
            } else {
                int mid = (low + high) / 2;
                sortVector(vec, low, mid);
                sortVector(vec, mid + 1, high);
                mergeVector(vec, low, mid, high);
            }
    }
}

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
    sortVector(_vec, 0, _vec.size() - 1);
}

std::vector<int> PmergeMe::getVec() const {
    return _vec;
}

void PmergeMe::printList() {
    std::cout << "After List : ";
    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::printVector()
{
    std::cout << "After Vector : ";
    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

std::list<int> PmergeMe::getList() const {
    return _list;
}

void PmergeMe::merge(std::list<int>& list1, std::list<int>& list2) {
    std::list<int> result;

    while (!list1.empty() && !list2.empty()) {
        if (list1.front() <= list2.front()) {
            result.push_back(list1.front());
            list1.pop_front();
        } else {
            result.push_back(list2.front());
            list2.pop_front();
        }
    }

    while (!list1.empty()) {
        result.push_back(list1.front());
        list1.pop_front();
    }
    while (!list2.empty()) {
        result.push_back(list2.front());
        list2.pop_front();
    }
    list1 = result;
}

void PmergeMe::sortList(std::list<int>& inputList) {
    if (inputList.size() <= 1)
        return;

    std::list<int> list1, list2;

    int halfSize = inputList.size() / 2;
    std::list<int>::iterator it = inputList.begin();
    for (int i = 0; i < halfSize; ++i) {
        list1.push_back(*it);
        ++it;
    }
    while (it != inputList.end()) {
        list2.push_back(*it);
        ++it;
    }
    sortList(list1);
    sortList(list2);
    merge(list1, list2);
    inputList = list1;
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
    sortList(_list);
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {
    _vec.clear();
    _list.clear();
}