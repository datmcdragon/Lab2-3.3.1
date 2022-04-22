#include "ComplexP.h"
#include <iostream>

ComplexP::ComplexP(const double a, const double b)
	: Pair(a, b)
{}

ComplexP::ComplexP(const ComplexP& r)
	: Pair(r)
{}

ComplexP::~ComplexP()
{}

ComplexP operator - (const ComplexP& l, const ComplexP& r)
{
	ComplexP t;

	t.setX(l.getX() - r.getX());
	t.setY(l.getY() - r.getY());

	return t;
}

ComplexP operator / (const ComplexP& l, const ComplexP& r)
{
	ComplexP t;
	double lX = l.getX(), rX = r.getX(), lY = l.getY(), rY = r.getY();

	t.setX((lX * rX + lY * rY) / (rX * rX + rY * rY));
	t.setY((rX * lY - lX * rY) / (rX * rX + rY * rY));

	return t;
}

ComplexP operator ~ (const ComplexP& r)
{
	ComplexP t;

	t.setX(r.getX());
	t.setY(-r.getY());

	return t;
}

ComplexP::operator string() const
{
	return Pair::operator string();
}

ostream& operator << (ostream& out, const ComplexP& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, ComplexP& r)
{
	double a, b;

	cout << "Re = "; in >> a;
	cout << "Im = "; in >> b;

	r.setX(a);
	r.setX(b);

	return in;
}
