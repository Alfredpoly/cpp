#ifndef CPP_RPN_HPP
#define CPP_RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <sstream>

class rpn {
    private:
        std::stack<double> _stack;
        std::string _expression;
    public:
        explicit rpn(std::string expression);
        ~rpn();
        double calculate(double a, double b, char op);
};

#endif //CPP_RPN_HPP
