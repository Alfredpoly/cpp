#include "RPN.hpp"

rpn::rpn(std::string expression){
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == ' ')
            continue;
        else if (isdigit(expression[i]))
        {
            std::stringstream ss;
            ss << expression[i];
            double num;
            ss >> num;
            _stack.push(num);
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            if (_stack.empty())
            {
                std::cout << "ERROR" << std::endl;
                return;
            }
            double a = _stack.top();
            _stack.pop();
            if (_stack.empty())
            {
                std::cout << "ERROR" << std::endl;
                return;
            }
            double b = _stack.top();
            _stack.pop();
            _stack.push(calculate(a, b, expression[i]));
        }
        else
        {
            std::cout << "ERROR" << std::endl;
            return;
        }
    }
    std::cout << _stack.top() << std::endl;
}

rpn::~rpn(){}

double rpn::calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return b - a;
        case '*':
            return a * b;
        case '/':
            return b / a;
        default:
            return 0;
    }
}

