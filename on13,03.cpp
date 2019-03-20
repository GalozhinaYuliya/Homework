#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>


using namespace std;

const int n = 300;

char* AllocateMemory(int n);
void ReplaceWord(char*, char*, char*);

int main()
{
	char* oldarray = AllocateMemory(n);
	char* word = AllocateMemory(n);
	char* newword = AllocateMemory(n);

	cout << "Please, enter your massive ";
	cin.getline(oldarray,300);

	cout << "Please, enter word whose need to replaced ";
	cin.getline(word,300);
	cout << endl;

	cout << "Please, enter new word ";
	cin.getline(newword,300);
	 
	ReplaceWord(oldarray, word, newword);
	cout << oldarray;
	system("pause");
}
char* AllocateMemory(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}

	char* array = new char[n];

	return array;
}
void ReplaceWord(char* oldarray, char* word, char* newword)
{
	char* newarray = new char(n);
	char * replace = new char(n);

	int l = strlen(word);
	int f = strlen(newword);
	replace = strstr(oldarray, word);

	strcpy(newarray, replace + l);
	strcpy(replace, newword);
	strcpy(strstr(oldarray, newword) + f, newarray);
}
