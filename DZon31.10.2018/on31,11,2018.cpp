#include <iostream>

using namespace std;

int FibonachiNumber();

int main(int n)
{
	int number = FibonachiNumber();
	cout << "Min Fibonachi number " << number << endl;
	system("pause");
	return 0;
}

int FibonachiNumber()
{
	int first = 0, n = 0;
	int second = 1;
	while (n < 100)
	{
		n = first + second;
		first = second;
		second = n;
	}
	return n;
}