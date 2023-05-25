#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc <= 2)
    {
        std::cout << "Wrong Input" << std::endl;
        return 1;
    }
    else {
        clock_t start_v, end_v, total_v, start_l, end_l, total_l;

        PmergeMe pmerge;
        start_v = clock();
        pmerge.sortWithVector(argv);
        end_v = clock();
        total_v = end_v - start_v;
        start_l = clock();
        pmerge.sortWithList(argv);
        end_l = clock();
        total_l = end_l - start_l;
        std::cout << "Before : ";
        for (int i = 1; i < argc; i++)
            std::cout << argv[i] << " ";
        std::cout << std::endl;
        std::cout << "After : ";
        for (std::vector<int>::iterator it = pmerge.getVec().begin(); it != pmerge.getVec().end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << std::fixed << total_v << std::setprecision(5) << " us" << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << std::fixed << total_l << std::setprecision(5) << " us" << std::endl;
    }

    return 0;
}