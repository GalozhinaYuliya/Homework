#include <iostream>

using namespace std;

char Equality(char*, char*, int);

int main()
{
	const int  N = 100;
	char firstarray[N] = { 0 };
	char secondarray[N] = { 0 };


	cout << "Enter first array with lenght less then " << N << endl;
	cin >> firstarray;
	cout << "Enter second array with lenght less then " << N << endl;
	cin >> secondarray;

	if (Equality(firstarray, secondarray, N) == false)
	{
		cout << "Arrays aren't equal" << endl;
	}
	else
	{
		cout << "Arrays are equal" << endl;
	}
	system("pause");
}
char Equality(char* firstarray, char* secondarray, int N)
{
	for (int i = 0; i < N; i++)
	{
		if (firstarray[i] == secondarray[i])
		{
			return true;
		}
		return false;
	}
}