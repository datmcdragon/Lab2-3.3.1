#pragma once

#include "Pair.h"

class Complex
	: public Pair
{
public:
	Complex(const double a = 0, const double b = 0);
	Complex(const Complex& r);
	~Complex(void);

	friend Complex operator - (const Complex& l, const Complex& r);
	friend Complex operator / (const Complex& l, const Complex& r);
	friend Complex operator ~ (const Complex& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Complex& r);
	friend istream& operator >> (istream& in, Complex& r);
};

