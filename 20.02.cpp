#include <iostream>
#include "Arrays.h"

using namespace std;

void IntArray(double* array, int*, int n);
void Keys(const int* massive, int*, int n);
void BubbleSort(int* massive, int* Ar, int n);
void DisplayBubbleSortMax(int* massive, int n);
void NewArray(const int* massive, int* newarray, int n, int a, int b, int &);

int main()
{
	int n;
	while (true)
	{
		cout << "Enter n ";
		cin >> n;
		if (n > 0)
		{
			break;
		}
		cout << "Invalid data" << endl;
	}
	double* array = new double[n];
	int* massive = new int[n];
	int* Ar = new int[n];
	int* newarray = new int[n];

	InPutArray(array, n);
	IntArray(array, massive, n);
	Keys(massive, Ar, n);

	BubbleSort(massive, Ar, n);

	int a, b;
	cout << "Please, enter quantity of ones a= ";
	cin >> a;
	cout << endl;
	cout << "Please, enter quantity of nulls b = ";
	cin >> b;

	int nNewArray = 0; // size of NewArray
	NewArray(massive, newarray, n, a, b, nNewArray);
	DisplayBubbleSortMax(newarray, nNewArray);

	system("pause");
	return 0;
}
void IntArray(double* array, int* massive, int n)
{
	for (int i = 0; i < n; i++)
	{
		massive[i] = (int)array[i];
	}
}

void Keys(const int* massive, int* Ar, int n)
{
	int one = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = massive[i];
		while (temp)
		{
			if (temp % 2 == 1)
			{
				one++;
			}

			temp /= 2;
		}
		Ar[i] = one;
		one = 0;
	}
}

void BubbleSort(int* massive, int* Ar, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (massive[j] < massive[j + 1])
			{
				swap(massive[j], massive[j + 1]);
				swap(Ar[j], Ar[j + 1]);
			}
		}
}
void DisplayBubbleSortMax(int* massive, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << massive[i] << " ";
	}
}

void NewArray(const int* massive, int* newarray, int n, int a, int b, int &sizeNewArray)
{
	sizeNewArray = 0;
	for (int i = 0; i < n; i++)
	{
		int one = 0, zero = 0;
		int temp = massive[i];
		while (temp)
		{
			if (temp % 2 == 1)
			{
				one++;
			}
			else
			{
				zero++;
			}

			temp /= 2;
		}
		if ((one != a) || (zero != b))
		{
			newarray[sizeNewArray] = massive[i];
			sizeNewArray++;
		}
	}
}