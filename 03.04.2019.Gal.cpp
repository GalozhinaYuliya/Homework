#include <iostream>
#include"String.h"
using namespace std;

const int n = 300;

int GetLength();
void NewArray(char*, const char*, const char*, int);
void CodeArray(char*, const char*, int, int);

int main()
{
	char* oldarray = new char[n];
	cout << "Please, enter your array: " << endl;
	cin.getline(oldarray, 300);
	int len = GetLength();

	const char* symbols = " ,./?!@%$&;:";
	const char* code = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	NewArray(oldarray, symbols, code, len);

	system("pause");
	return 0;
}

int GetLength()
{
	int length;
	cout << "Please, enter length of your word ";
	cin >> length;
	if (length < 0)
	{
		cout << " Invalid number! Enter other value " << endl;
	}
	return length;
}
void NewArray(char* oldarray,const char* symbols, const char* code, int len)
{
	int n = strlen(oldarray);
	for (int i = 0; i < n; )
	{
		for (int j = 0; j < strlen(symbols); )
		{
			if (oldarray[i] != symbols[j])
			{
				j++;
			}
			else if (oldarray[i] == symbols[j] && i == len)
			{
				CodeArray(oldarray, code, i, len);
			}
		}
		
		i++;
	}
	
}
void CodeArray(char* oldarray, const char* code, int k, int len)
{
	for (int i = k - len; i < k; i++)
	{
		for (int j = 0; j < strlen(code); j++)
		{
			if (oldarray[i] == code[j]&& j<strlen(code)/2)
			{
				oldarray[i] = j;
				cout << "[" << strlen(code)/2 - j<< "]";
			}
			else if (oldarray[i] == code[j] && j > strlen(code) / 2)
			{
				oldarray[i] = j;
				cout << "[" << strlen(code) - j << "]";
			}
		}
	}
}
