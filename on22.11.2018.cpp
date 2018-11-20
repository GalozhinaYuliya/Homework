#include <iostream>

using namespace std;
void InPutArray(int* array, int n);
void BubbleSortMax(int* array, int n);
void DisplayBubbleSortMax(int* array, int n);
void BubbleSortMin(int* array, int n);
void DisplayBubbleSortMin(int* array, int n);
void SelectionMax(int* array, int n);
void DisplaySortMax(int* array, int n);
void SelectionMin(int* array, int n);
void DisplaySortMin(int* array, int n);


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
	InPutArray(array, n);
	BubbleSortMax(array, n);
	cout << "Insource array : " ;
	DisplayBubbleSortMax(array, n);
	BubbleSortMin(array, n);
	cout << "\nInsource array : ";
	DisplayBubbleSortMin(array, n);
	SelectionMax(array,n);
	cout << "\nInsource array : ";
	DisplaySortMax(array, n);
	SelectionMin(array, n);
	cout << "\nInsource array : ";
	DisplaySortMin(array, n);
	system("pause");
}
void InPutArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[ " << (i + 1) << " ]" << " = ";
		cin >> array[i];
	}
}
void BubbleSortMax(int* array, int n)
{
	bool swapped = true;
	int i = 1;
	while (swapped)
	{
		swapped = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
				swapped = true;
			}
		}
	}
}
void DisplayBubbleSortMax(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void BubbleSortMin(int* array, int n)
{
	bool swapped = true;
	int i = 1;
	while (swapped)
	{
		swapped = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (array[j] > array[j-1])
			{
				swap(array[j], array[j-1]);
				swapped = true;
			}
		}
	}
}
void DisplayBubbleSortMin(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void SelectionMax(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		swap(array[min], array[i]);
	}
}
void DisplaySortMax(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void SelectionMin(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[min] < array[j])
			{
				min = j;
			}
		}
		swap(array[min], array[i]);
	}
}
void DisplaySortMin(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}