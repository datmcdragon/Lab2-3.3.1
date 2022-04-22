#pragma once

#include <string>

using namespace std;

class Pair
{
private:
	double x, y;
public:
	Pair(const double a = 0, const double b = 0);
	Pair(const Pair& r);
	~Pair(void);

	double getX() const { return x; };
	double getY() const { return y; };

	void setX(double);
	void setY(double);

	operator string() const;
	friend ostream& operator << (ostream& out, const Pair& r);
	friend istream& operator >> (istream& in, Pair& r);
};

