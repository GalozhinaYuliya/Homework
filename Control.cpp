#include <iostream>

using namespace std;

void encoding(char[], int[], char[]);
void decoding(int[], char[], char[]);
void codingTests();
bool equals(char[], char[]);
int GetLength(char[]);
int GetLength(int mas[]);

int main()
{
	codingTests();
	system("pause");
}

void encoding(char source[], int encoding[], char rule[])
{
	const int n = 30;
	//int encoding[] = { 0 };
	//char source[] = { "learn c++!" };
	//char rule[] = { 'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','!','+',' ' };
	for (int i = 0; i < GetLength(source); i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (source[i] == rule[j])
			{
				encoding[i] = j;
			}
		}
	}
}

void decoding(int source[], char decoding[], char rule[])
{
	const int n = 30;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (source[i] == j)
			{
				decoding[i] = rule[j];
			}
		}
	}
}

bool equals(char lhs[], char rhs[])
{
	int n = GetLength(lhs), m = GetLength(rhs);
	if (n != m)
	{
		return false;
	}

	int i = 0;

	while (i < n)
	{

		if (lhs[i] != rhs[i])
		{
			return false;
		}
		i++;
	}
	return true;
}

void codingTests()
{
	char rule[] = { 'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','!','+',' ' };
	const int length = 11;

	char source[length] = "learn c++!";

	int numbers[length - 1] = { 0 };

	encoding(source, numbers, rule);

	char expected[length];

	decoding(numbers, expected, rule);

	cout << equals(source, expected) << endl;

	//...
}
int GetLength(char mas[])
{
	int length = 0;

	while (mas[length])
	{
		length++;
	}

	return length;
}

int GetLength(int mas[])
{
	int length = 0;
	while (mas[length])
	{
		length++;
	}
	return length;
}