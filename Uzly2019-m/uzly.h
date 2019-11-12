#pragma once
class uzly abstract
{
protected:
	double a;
	double b;
	int n;
public:
	uzly();
	uzly(double a, double b, int n);
	virtual double operator[](int k)const = 0;
	int get_n() {return n;}
};

