#pragma once
#include "uzly.h"
class ravn_uzly :
	public uzly
{
public:
	ravn_uzly(double a, double b, int n);
	double operator[](int k) const;
};

