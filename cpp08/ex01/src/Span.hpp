#ifndef __SPAN_H_
#define __SPAN_H_
#include <vector>
#include <numeric>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _span;

	public:
		Span(unsigned int N);
		~Span();
		void	addNumber(int i);
		void	addNumbers();
		void	checkSize();
		int		shortestSpan();
		int		longestSpan();
		int		sizeSpan();

};

#endif