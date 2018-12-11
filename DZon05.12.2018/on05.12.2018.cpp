#include <iostream>

using namespace std;

const int N = 100;

int NewMass(char oldarray[N], char newarray[N][N]);

int main()
{
	char oldarray[N];
	cout << "Please, write your array " << endl;
	cin.getline(oldarray, N);
	char newarray[N][N];
	int countWord = NewMass(oldarray, newarray);
	cout << "New matrix" << endl;
	for (int i = 0; i < countWord; i++)
	{
		cout << newarray[i] << endl;
	}
	system("pause");
	return 0;
}
int NewMass(char oldarray[N], char newarray[N][N])
{
	int k, m, countWord;
	k = m = countWord = 0;
	for (int i = 0; i < strlen(oldarray); i++)
	{
		const char symbol = oldarray[i];
		if (symbol >= 'a' && symbol <= 'z')
		{
			if (m == 0)
			{
				countWord++;
			}
			newarray[k][m] = oldarray[i];
			m++;
		}
		else
		{
			newarray[k][m] = '\0';
			k++;
			m = 0;
		}
	}
	newarray[k][m] = '\0';
	return countWord;
}