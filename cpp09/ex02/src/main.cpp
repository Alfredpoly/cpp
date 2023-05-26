#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc <= 2)
    {
        std::cout << "Wrong Input" << std::endl;
        return 1;
    }
    else {
        std::chrono::steady_clock::time_point start_v, end_v, start_l, end_l;
        std::chrono::microseconds total_v, total_l;

        PmergeMe pmerge;
        start_v = std::chrono::steady_clock::now();
        pmerge.sortWithVector(argv);
        end_v = std::chrono::steady_clock::now();
        total_v = std::chrono::duration_cast<std::chrono::microseconds>(end_v - start_v);
        start_l = std::chrono::steady_clock::now();
        pmerge.sortWithList(argv);
        end_l = std::chrono::steady_clock::now();
        total_l = std::chrono::duration_cast<std::chrono::microseconds>(end_l - start_l);
        std::cout << "Before : ";
        for (int i = 1; i < argc; i++)
            std::cout << argv[i] << " ";
        std::cout << std::endl;
        pmerge.printVector();
        pmerge.printList();
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << total_v.count() << " us" << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << total_l.count() << " us" << std::endl;
    }

    return 0;
}