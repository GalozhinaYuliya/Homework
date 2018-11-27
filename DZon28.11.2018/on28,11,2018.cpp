#include <iostream>

using namespace std;

char Attitude(char*, char*, int);

int main()
{
	const int  N = 100;
	char firstarray[N] = { 0 };
	char secondarray[N] = { 0 };


	cout << "Enter first array with lenght less then " << N << endl;
	cin >> firstarray;
	cout << "Enter second array with lenght less then " << N << endl;
	cin >> secondarray;
	Attitude(firstarray, secondarray, N);
	system("pause");

}
char Attitude(char* firstarray, char* secondarray, int N)
{
	for (int i = 0; i < N; i++)
	{
		if (firstarray[i] == secondarray[i])
		{
			cout << "Arrays are equal" << endl;
		}
		else if (firstarray[i] > secondarray[i])
		{
			cout << "The first array greater than second array" << endl;
		}
		else
		{
			cout << "The second array greater than first array" << endl;
		}
		return true;
	}
	
}