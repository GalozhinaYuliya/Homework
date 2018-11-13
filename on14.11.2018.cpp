#include <iostream>

using namespace std;

int Zero(int);
int One(int);

int main()
{
	int n;
	cout << "Please, enter number n " << endl;
	cin >> n;
	cout << " Quantity of zero = " << Zero(n) << endl;
	cout << " Quantity of one = " << One(n) << endl;
	system("pause");
}
int Zero(int n)
{
	int zero = 0, a=0;
	while (n != 0)
	{
		a = n % 2;
		if (a == 0)
		{
			zero += 1;
		}
		n /= 2;
	}
	return  zero;
}
int One(int n)
{
	int one = 0, a = 0;
	while (n != 0)
	{
		a = n % 2;
		if (a == 1)
		{
			one += 1;
		}
		n /= 2;
	}
	return  one;
}