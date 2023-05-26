#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: ./RPN \"[expression]\"" << std::endl;
        return 1;
    }
    else {
        rpn rpn(argv[1]);
    }

    return 0;
}