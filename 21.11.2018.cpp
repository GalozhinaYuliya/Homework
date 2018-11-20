#include <iostream>

using namespace std;

int Sequence(int*array, int, int);
void inputArray(int* array, int n);

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
	int digit;
	cout << "Please, enter digit = " << endl;
	cin >> digit;
	inputArray(array, n);
	cout << "Numbers whose less than " << digit << " = " << Sequence(array, n, digit)<< endl;

	system("pause");
}
void inputArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[ " << (i + 1) << " ] : ";
		cin >> array[i];
	}
}
int Sequence(int*array, int n, int digit)
{
	int kol = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < digit)
		{
			kol++;
		}
	}
	return kol;
}