#pragma once
#include <iostream>

using namespace std;

class Fractions
{
public:
	Fractions(int,int);
	~Fractions();

#pragma region Set
	void setNumerator(int);
	void setDenominator(int);
	void setFraction(int, int);
#pragma endregion

	int getNumerator();
	int getDenominator();
	double getFraction();
	bool rigthFraction(int,int) const;

#pragma region Function
	double multiplicationOfFraction(Fractions);
	double divisionOfFraction(Fractions);
	double additionOfFraction(Fractions);
	double subtractionOfFraction(Fractions);
#pragma endregion



private:
	int a, b, num, den;
	double frac;
};
