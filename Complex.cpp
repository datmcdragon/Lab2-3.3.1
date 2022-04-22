#include "Complex.h"
#include <iostream>

Complex::Complex(const double a, const double b)
	: Pair(a, b)
{}

Complex::Complex(const Complex& r)
	: Pair(r)
{}

Complex::~Complex(void)
{}

Complex operator - (const Complex& l, const Complex& r)
{
	Complex t;

	t.setX(l.getX() - r.getX());
	t.setY(l.getY() - r.getY());

	return t;
}

Complex operator / (const Complex& l, const Complex& r)
{
	Complex t;
	double lX = l.getX(), rX = r.getX(), lY = l.getY(), rY = r.getY();

	t.setX((lX * rX + lY * rY) / (rX * rX + rY * rY));
	t.setY((rX * lY - lX * rY) / (rX * rX + rY * rY));

	return t;
}

Complex operator ~ (const Complex& r)
{
	Complex t;

	t.setX(r.getX());
	t.setY(-r.getY());

	return t;
}

Complex::operator string() const
{
	return Pair::operator string();
}

ostream& operator << (ostream& out, const Complex& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Complex& r)
{
	double a, b;

	cout << "Re = "; in >> a;
	cout << "Im = "; in >> b;

	r.setX(a);
	r.setX(b);

	return in;
}
