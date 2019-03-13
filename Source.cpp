#include <iostream>
#include "ArrayLibrary.h"

typedef bool(*Predicate)(int, int, int);
typedef int(*Key)(int*, int);


using namespace std;
using namespace ArrayExtension;

void Array(int *, int);
void DisplayArray(int*, int);
int GetKeys(int*, int);
bool predicate(int, int, int);
void DeleteElements(int*, int&, int);
void NewArray(int*, int&, int*, Predicate);
int GetAmountOfDeletedElements(int*, int, Key, Predicate);

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

	int* firstmassive = new int[n];//ââîäèëè 5 ýëåìåíòîâ, ìèíèìóìîì áðàëà 2, ýëåìíòàìè áûëè 2 4 7 9 5, â íîâûé ìàññèâ çàïèñûâàëèñü 7 , óäàëÿÿñü ïðè ýòîì èç ñòàðîãî
    Array(firstmassive, n);
	DisplayArray(firstmassive, n);

	

	int m = GetAmountOfDeletedElements(firstmassive, n, GetKeys, predicate);

	int* secondmassive = new int[m];
	NewArray(firstmassive, n, secondmassive, predicate);

	DisplayArray(secondmassive, m);
	cout << endl;
	DisplayArray(firstmassive, n);
	cout << endl;
	system("pause");
}
void Array(int* firstmassive, int n)
{
	for (int* j = firstmassive, i = 0; j < firstmassive + n; j++, i++)
	{
		cout << "[ " << i + 1 << " ] = ";
		cin >> *j;

	}
}

void DisplayArray(int* firstmassive, int n)
{
	for (int* j = firstmassive; j < firstmassive + n; j++)
	{
		cout << *j << "  ";
	}
	cout << endl;
}

int GetKeys(int* firstmassive, int n)
{
	int min = firstmassive[0];

	for (int i = 1; i < n; i++)
	{
		if (firstmassive[i] < min)
		{
			min = firstmassive[i];
		}
	}

	return min;
}

bool predicate(int a, int b,int min)
{
		return a % min == 0 && b % min != 0;
}

void NewArray(int* firstmassive, int& n, int* secondmassive, Predicate predicate)
{
	int min = GetKeys(firstmassive, n);

	for (int i = 0, j = 0; i < n; i++)
	{
		if (predicate(firstmassive[i],firstmassive[i + 1], min))
		{
			secondmassive[j] = firstmassive[i + 1];
			j++;
			DeleteElements(firstmassive, n, i + 2);

		}
	
	}
}

void DeleteElements(int* array, int& n, int index)
{
	int m = n;
	for (int i = index - 1; i < m; i++)
	{
		array[i] = array[i + 1];
	}

	n--;
}

int GetAmountOfDeletedElements(int* array, int n,Key key, Predicate predicate)
{
	int i = 0, k = 0;

	while (i < n)
	{
		if (predicate(array[i], array[i+1],key(array,n)))
		{
			k++;
		}

		i++;
	}

	return k;
}
