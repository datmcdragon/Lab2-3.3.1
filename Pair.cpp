#include "Pair.h"
#include <sstream>
#include <iostream>

Pair::Pair(const double a, const double b)
	: x(a), y(b)
{}

Pair::Pair(const Pair& r)
{
	x = r.x;
	y = r.y;
}

Pair::~Pair(void)
{}

void Pair::setX(double value)
{
	x = value;
}

void Pair::setY(double value)
{
	y = value;
}

Pair::operator string() const
{
	stringstream ss;
	ss << "Re: " << x << " Im: " << y << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Pair& r)
{
	out << (string)r;
	return out;
}

istream& operator >> (istream& in, Pair& r)
{
	double a, b;

	cout << "x = "; in >> a;
	cout << "y = "; in >> b;

	r.setX(a);
	r.setX(b);

	return in;
}
