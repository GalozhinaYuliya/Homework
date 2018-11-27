#include <iostream>
#include "NumberLibrary.h"

using namespace std;

int DigitNumber(long long);
int MaxDigit(long long);
int MinDigit(long long);

int main()
{
	long long digit;
	cout << "Enter digit " << endl;
	cin >> digit;
    cout << "quantity of numbers " << DigitNumber(digit) << endl;
	if (IsPrimeNumber(digit))
	{
		cout << digit << " -is prime number" << endl;
	}
	cout << digit << " - isn't prime number" << endl;
	cout << "Max number in digit " << MaxDigit(digit) << endl;
	cout << "Min number in digit " << MinDigit(digit) << endl;
	system("pause");
    return 0;
}

int DigitNumber(long long digit)
{
	
	int num = 0;
	while (digit > 0)
	{ 
		digit /= 10;
		num++;
	}
	return num;
}
int MaxDigit(long long digit)
{
	int remainder = 0;
	int maxdigit = 0;
	digit = abs(digit);
	while (digit > 0)
	{
		remainder = digit % 10;
		if (remainder >= maxdigit)
		{
			maxdigit = remainder;
		}
		digit /= 10;
	}
	return maxdigit;
}
int MinDigit(long long digit)
{
	int remainder = 0;
	int mindigit = 9;
	digit = abs(digit);
	while (digit > 0)
	{
		remainder = digit % 10;
		if (mindigit>=remainder)
		{
			mindigit = remainder;
		}
		digit /= 10;
	}
	return mindigit;
}