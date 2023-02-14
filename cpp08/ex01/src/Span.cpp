#include "Span.hpp"

Span::Span(unsigned int N) : _N(N){}

Span::~Span(){}

void Span::addNumber(int i)
{
	if (_span.size() >= _N)
		std::__throw_length_error("span is full");
	_span.push_back(i);
}

void Span::addNumbers()
{
	size_t size =  _N - _span.size();
	for (size_t j = 1; j < size; j++)
			addNumber(j);
}

void Span::checkSize()
{
	if (_span.size() < 2)
		std::__throw_length_error("The container is too small.");
}

int Span::shortestSpan() {
	checkSize();
	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*std::min_element(tmp.begin() + 1, tmp.end()));
}

int Span::longestSpan() {
	checkSize();
	int min = *std::min_element(_span.begin(), _span.end());
	int max = *std::max_element(_span.begin(), _span.end());
	return (max - min);
}