#include "uzly.h"

uzly::uzly()
{
    a = -1;
	b = 1;
	n = 2;
}

uzly::uzly(double a, double b, int n)
{
	double c;
	if (a>b)
	{
		this->a = b;
	    this->b = a;
	}
	else
	{
		this->a = a;
	    this->b = b;
	}
	
	this->n = (n>1) ? n : 2;
}


