//
// This class will represent positive rational numbers and show operator overloading
// Negative rationals are not allowed to keep code simpler
//
#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <iostream>
using namespace std;
class Rational
{
public:
	Rational();
	Rational(int num, int den);

	int numerator() const;
	int demnominator() const;
	bool set_value(int num, int den);

	//Overloads for arithmetic operations
	Rational operator*(const Rational& rat) const;
	Rational& operator*=(const Rational& rat);
	Rational operator/(const Rational& rat) const;
	Rational& operator/=(const Rational& rat);
	Rational operator-(const Rational& rat) const;
	Rational& operator-=(const Rational& rat);
	Rational operator+(const Rational& rat) const;
	Rational& operator+=(const Rational& rat);

	//Overloads for comparisons
	bool operator==(const Rational& rhs) const;
	bool operator!=(const Rational& rhs) const;
	bool operator<(const Rational& rhs) const;
	bool operator<=(const Rational& rhs) const;
	bool operator>(const Rational& rhs) const;
	bool operator>=(const Rational& rhs) const;

	//Overloads for streams
	friend ostream& operator<<(ostream& stream, const Rational& rat);
	friend istream& operator>>(istream& stream, Rational& rat);




	void PrintRational(ostream& stream) const;

private:
	int numerator_;
	int denominator_;
	void reduce();
};
#endif

