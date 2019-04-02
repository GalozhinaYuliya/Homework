#include "Fractions.h"

Fractions::Fractions(int num, int den)
{
	setFraction(num, den);
}

Fractions::~Fractions()
{
	cout << "I'm deed";
}

#pragma region Set
void Fractions::setNumerator(int num)
{
	a = num;
}

void Fractions::setDenominator(int den)
{
	if (den == 0)
	{
		throw invalid_argument(" Denominator can't be equal 0");
	}
	b = den;
}

void Fractions::setFraction(int num, int den)
{
	setNumerator(num);
	setDenominator(den);

	frac = num / den;
}
#pragma endregion

int Fractions::getNumerator()
{
	return num;
}

int Fractions::getDenominator()
{
	return den;
}

double Fractions::getFraction()
{
	return frac = getNumerator() / getDenominator();
}

bool Fractions::rigthFraction(int num, int den) const
{
	return num < den ? 1 : 0;
}

#pragma region Function
double Fractions::multiplicationOfFraction(Fractions other)
{
	return (getNumerator() * other.getNumerator()) / (getDenominator() * other.getDenominator());
}

double Fractions::divisionOfFraction(Fractions other)
{
	return (getNumerator* other.getDenominator) / (getDenominator * other.getNumerator);
}

double Fractions::additionOfFraction(Fractions other)
{
	int newnum;
	if (getDenominator() > other.getDenominator() && getDenominator() % other.getDenominator() == 0)
	{
		newnum = getNumerator() + other.getNumerator() * (getDenominator() / other.getDenominator());
		return newnum / getDenominator();
	}
	if (getDenominator() < other.getDenominator() && other.getDenominator() % getDenominator() == 0)
	{
		newnum = other.getNumerator() + getNumerator() * (getDenominator() / other.getDenominator());
		return newnum / getDenominator();
	}
	if (getDenominator() != other.getDenominator())
	{
		newnum = getNumerator() * other.getDenominator() + other.getNumerator() * getDenominator();
		return newnum / (getDenominator()*other.getDenominator());
	}
}

double Fractions::subtractionOfFraction(Fractions other)
{
	int newnum;
	if (getDenominator() > other.getDenominator() && getDenominator() % other.getDenominator() == 0)
	{
		newnum = getNumerator() - other.getNumerator() * (getDenominator() / other.getDenominator());
		return newnum / getDenominator();
	}
	if (getDenominator() < other.getDenominator() && other.getDenominator() % getDenominator() == 0)
	{
		newnum = other.getNumerator() - getNumerator() * (getDenominator() / other.getDenominator());
		return newnum / getDenominator();
	}
	if (getDenominator() != other.getDenominator())
	{
		newnum = getNumerator() * other.getDenominator() - other.getNumerator() * getDenominator();
		return newnum / (getDenominator()*other.getDenominator());
	}
}

#pragma endregion
