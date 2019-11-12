#include "ravn_uzly.h"
#include <stdexcept>

ravn_uzly::ravn_uzly(double a, double b, int n):
uzly(a, b, n)
{
}

double ravn_uzly::operator[](int k) const
{
	if (k<0 || k>=n)
	{
		throw std::out_of_range("Index k is out of range (i<0 or i>=n)");
	}
	return (b-a)/(n-1)*k+a;
}
