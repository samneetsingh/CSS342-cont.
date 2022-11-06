#include "rational.h"

Rational::Rational() : numerator_(0), denominator_(1)
{
}

Rational::Rational(int num, int den) : numerator_(num), denominator_(den)
{
	if (den == 0)
	{
		numerator_ = 0;
		denominator_ = 1;
	}
	reduce();
}

int Rational::numerator() const
{
	return numerator_;
}

int Rational::demnominator() const
{
	return denominator_;
}

bool Rational::set_value(int num, int den)
{
	if (den == 0)
	{
		return false;
	}
	numerator_ = num;
	denominator_ = den;
	reduce();
	return true;
}

void Rational::reduce()
{
	//if both numerator and denominator are negative make positive
	//if rational is negative keep numerator negative
	if ((numerator_ < 0) && (denominator_ < 0))
	{
		numerator_ = -numerator_;
		denominator_ = -denominator_;
	}
	if ((denominator_ < 0) && (numerator_ > 0))
	{
		numerator_ = -numerator_;
		denominator_ = -denominator_;
	}

	//find common factor
	int gcf = 1;
	int num = abs(numerator_);
	int den = abs(denominator_);
	int minimum = min(num, den);
	for (int i = 2; i <= minimum; i++)
	{
		if (((num % i) == 0) && ((den % i) == 0))
		{
			gcf = i;
		}
	}

	if (gcf > 1)
	{
		numerator_ /= gcf;
		denominator_ /= gcf;
	}
}

//arithmetic operations
Rational& Rational::operator*=(const Rational& rat)
{
	numerator_ = numerator_ * rat.numerator_;
	denominator_ = denominator_ * rat.denominator_;
	reduce();
	return *this;
}

Rational Rational::operator*(const Rational& rat) const
{
	Rational result = *this;
	result *= rat;
	return result;
}

Rational& Rational::operator/=(const Rational& rat)
{
	numerator_ = numerator_ * rat.denominator_;
	denominator_ = denominator_ * rat.numerator_;
	reduce();
	return *this;
}

Rational Rational::operator/(const Rational& rat) const
{
	Rational result = *this;
	result /= rat;
	return result;
}

Rational& Rational::operator+=(const Rational& rat)
{
	int numerator = (numerator_ * rat.denominator_) + (rat.numerator_ * denominator_);
	int denominator = denominator_ * rat.denominator_;
	set_value(numerator, denominator);
	reduce();
	return *this;
}

Rational Rational::operator+(const Rational& rat) const
{
	Rational result = *this;
	result += rat;
	return result;
}

Rational& Rational::operator-=(const Rational& rat)
{
	int numerator = (numerator_ * rat.denominator_) - (rat.numerator_ * denominator_);
	int denominator = denominator_ * rat.denominator_;
	set_value(numerator, denominator);
	reduce();
	return *this;
}

Rational Rational::operator-(const Rational& rat) const
{
	Rational result = *this;
	result -= rat;
	return result;
}

bool Rational::operator==(const Rational& rhs) const
{
	return((numerator_ == rhs.numerator_) && (denominator_ == rhs.denominator_));
}

bool Rational::operator!=(const Rational& rhs) const
{
	return !(*this == rhs);
}

bool Rational::operator<(const Rational& rhs) const
{
	return ((numerator_ * rhs.denominator_) < (rhs.numerator_ * denominator_));
}

bool Rational::operator<=(const Rational& rhs) const
{
	return ((numerator_ * rhs.denominator_) <= (rhs.numerator_ * denominator_));
}

bool Rational::operator>(const Rational& rhs) const
{
	return ((numerator_ * rhs.denominator_) > (rhs.numerator_ * denominator_));
}

bool Rational::operator>=(const Rational& rhs) const
{
	return ((numerator_ * rhs.denominator_) >= (rhs.numerator_ * denominator_));
}

ostream& operator<<(ostream& stream, const Rational& rat)
{
	stream << rat.numerator_ << "/" << rat.denominator_;
	return stream;
}

istream& operator>>(istream& stream, Rational& rat)
{
	stream >> rat.numerator_ >> rat.denominator_;
	if (rat.denominator_ == 0)
	{
		rat.numerator_ = 0;
		rat.denominator_ = 1;
	}
	else
	{
		rat.reduce();
	}
	return stream;
}







