#ifndef CPP_MUTANTSTAC_HPP
#define CPP_MUTANTSTAC_HPP

#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	typedef T* iterator;
	MutantStack() {};
	~MutantStack() {};
	MutantStack( const MutantStack &stack )
	{
		*this = stack;
	}
	MutantStack& operator=(const MutantStack &stack)
	{
		*this = stack;
		return *this;
	}
	iterator begin()
	{
		iterator last = &this->top();
		for (int i = this->size(); i > 1; i--)
			last--;
		return last;
	}
	iterator end()
	{
		return (&this->top());
	}
};

#endif //CPP_MUTANTSTAC_HPP
