#include <iostream>

using namespace std;

void Zero(int, int*);
void One(int, int*);
void inputArray(int array[], int n);

int main()
{
	const int N = 100;

	int array[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter dimention of array <= " << N << ":";
		cin >> n;
		if (n >= 1 && n <= N)
		{
			break;
		}
		cout << "Invalid data";
	}
	inputArray(array, n);
	Zero(n, array);
	One(n, array);
	system("pause");
}
void inputArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[ " << (i + 1) << " ] : ";
		cin >> array[i];
	}
}
void Zero(int n, int* array)
{
	int i = 0;
	int a = 0, zero = 0;
	while (i <= n - 1)
	{
		while (array[i] != 0)
		{

			a = array[i] % 2;
			if (a == 0)
			{
				zero++;
			}
			array[i] /= 2;
		}
		cout << "quantity of zero in number = " << zero << endl;
		zero = 0;
		i++;
	}
}
void One(int n, int* array)
{
	int i = 0;
	int a = 0, one = 0;
	while (i<=n -1)
	{
		while (array[i] != 0)
		{

			a = array[i] % 2;
			if (a == 1)
			{
				one++;
			}
			array[i] /= 2;
		}
		cout << "quantity of ones in number = " << one << endl;
		i++;
		one = 0;
	}
}