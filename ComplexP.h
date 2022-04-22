#pragma once

#include "Pair.h"

class ComplexP
	: private Pair
{
public:
	ComplexP(const double a = 0, const double b = 0);
	ComplexP(const ComplexP& r);
	~ComplexP(void);

	double getX() const { return Pair::getX(); };
	double getY() const { return Pair::getY(); };

	void setX(double x) { Pair::setX(x); };
	void setY(double y) { Pair::setY(y); };

	friend ComplexP operator - (const ComplexP& l, const ComplexP& r);
	friend ComplexP operator / (const ComplexP& l, const ComplexP& r);
	friend ComplexP operator ~ (const ComplexP& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const ComplexP& r);
	friend istream& operator >> (istream& in, ComplexP& r);
};

