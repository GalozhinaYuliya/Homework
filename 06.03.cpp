#include <iostream>
#include "ArrayLibrary.h"

typedef bool(*Predicate)(int*, int);

typedef void(*Rule)(int*, int, int*);

using namespace std;
using namespace ArrayExtension;

void randomArray(int *, int);
void displayArray(int*, int);
int Key(int*, int);
bool predicate(int*, int);
void rule(int* , int , int* );
int* NewArray(int* , int ,int*, Predicate , Rule);

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
	int* firstmassive = new int(n);
	int* secondmassive = new int(n);
	
	randomArray(firstmassive, n);
	displayArray(firstmassive, n);
	cout << endl;

	int* newarray = NewArray(firstmassive, n,secondmassive, predicate, rule);

	displayArray(newarray, n);
	cout << endl;
	displayArray(secondmassive, n);
	cout << endl;
	system("pause");
}
void randomArray(int* firstmassive, int n)
{
	for (int i = 0; i < n; i++)
	{
		firstmassive[i] = rand()%10;
	}
}

void displayArray(int* firstmassive, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << firstmassive[i] << "  ";
	}
}

int Key(int* firstmassive, int n)
{
	int min;
	for (int i = 0; i < n; i++)
	{
		if (firstmassive[i-1] > firstmassive[i])
		{
			min = firstmassive[i];
		}
	}
	return min;
}

bool predicate(int* firstmassive, int n)
{
	int min = Key(firstmassive, n);
	for (int i = 0; i < n; i++)
	{
		if (firstmassive[i] % min && !(firstmassive[i + 1] % min))
		{
			return firstmassive[i + 1];
		}
	}

}

void rule(int* firstmassive, int n, int* secondmassive)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			secondmassive[j] = firstmassive[i + 1];
		}
	}
}
int* NewArray(int* firstmassive, int n, int* secondmassive, Predicate predicate, Rule rule)
{
	int* newarray = new int(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n;)
		{
			if (predicate(firstmassive, n))
			{
				newarray[j] = firstmassive[i];
				j++;
			}
			else
			{
				rule(firstmassive, n, secondmassive);
			}
		}
	}
	return newarray;
}
