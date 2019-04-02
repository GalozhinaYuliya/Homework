
#include "Fractions.h"



Fractions::Fractions()
{
}


Fractions::~Fractions()
{
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

double Fractions::multiplicationOfFraction(Fractions other) const
{
	return ( getNumerator() * other.getNumerator())/ (getDenominator() * other.getDenominator());
}

double Fractions::divisionOfFraction(Fractions other) const
{
	return (getNumerator* other.getDenominator) / (getDenominator * other.getNumerator);
}

double Fractions::additionOfFraction(Fractions other) const
{
	if(getDenominator()> other.getDenominator() && getDenominator()%other.getDenominator()==0)
	return 0.0;
}
