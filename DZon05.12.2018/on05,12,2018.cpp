#include <iostream>

using namespace std;

const int N = 100;

int GetLengthArray(char oldarray[N]);
int GetLength(char word[N]);
int searchWordInt( char *oldarray, char *word,  int pos);

void DeleteWord(char oldarray[N], char word[N]);
void DisplayArray(char newarray[N]);


int main()
{
	char oldarray[N] = { 0 };
	char word[N] = { 0 };

	cout << "Please, write your original array " << endl;
	cin >> oldarray;
	cout << "Please, write your word " << endl;
	cin >> word;

	DeleteWord(oldarray,word);
    DisplayArray(oldarray);
	system("pause");
}
void DisplayArray(char oldarray[N])
{
	for (int i = 0; i < GetLength(oldarray); i++)
	{
		cout << oldarray[i];
	}
}
int GetLengthArray(char oldarray[N])
{
	int length = 0;

	while (oldarray[length])// escape ïîñëåäîâàòåëüíîñòü
	{
		length++;
	}

	return length;
}
int GetLength(char word[N])
{
	int len = 0;
	while (word[len])
	{
		len++;
	}

	return len;
}
int searchWordInt( char *oldarray,  char *word,  int pos)
{
	int lenStr = strlen(oldarray);
	int lenWord = strlen(word);
	int j = 0;

	for (int i = pos; i < lenStr; i++)
	{
		if (oldarray[i] == word[j])
		{
			j++;
		}
		else
		{
			j = 0;
			if (oldarray[i] == word[j])
			{
				j++;
			}
		}
		
		if (j == lenWord)
		{
			return (i - j + 1);
		}
	}

	return lenStr;
}
void DeleteWordLength(char oldarray[N], char word[N])
{
	int pos = searchWordInt(oldarray, word, 0);

	int lenArray = GetLengthArray(oldarray);
	int lenWord = GetLength(word);
	for (int i = 0; i < lenWord; i++)
	{
		for (int j = pos; j < lenArray; j++)
		{
				oldarray[j] = oldarray[j + 1];
		}
	}
}
