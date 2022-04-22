#include <iostream>
#include "Complex.h"
#include "ComplexP.h"

using namespace std;

int main()
{
	Complex a(4, 3), b(7, 3), c;

	c = a - b;
	cout << c << endl;

	c = a / b;
	cout << c << endl;

	c = ~a;
	cout << c << endl << endl;

	ComplexP d(4, 3), g(7, 3), m;

	m = d - g;
	cout << m << endl;

	m = d / g;
	cout << m << endl;

	m = ~d;
	cout << m << endl;

	cin.get();
	system("pause");
}
