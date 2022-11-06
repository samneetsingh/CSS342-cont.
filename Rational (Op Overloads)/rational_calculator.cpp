
#include <iostream>
#include "rational.h"
using namespace std;

int main()
{

	//Let's create some rationals and run through some simple tests
	Rational a(1, 2);
	Rational b(-2, 6);
	Rational c(8, 9);
	Rational d(9, 0);
	Rational e;

	//Output stream showing constructors worked
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;

	//Math
	Rational f;
	f = a + b;
	cout << f << " = " << a << " + " << b << endl;
	f = a - b;
	cout << f << " = " << a << " - " << b << endl;
	f = a * b;
	cout << f << " = " << a << " * " << b << endl;
	f = a / b;
	cout << f << " = " << a << " / " << b << endl;

	//Comparison Example
	if (a < b)
	{
		cout << a << " < " << b << endl;
	}
	if (a > b)
	{
		cout << a << " > " << b << endl;
	}
	if (a != b)
	{
		cout << a << " != " << b << endl;
	}
}
