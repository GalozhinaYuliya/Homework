#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

const int n = 300;

typedef int*(*Key)(char*);

char**NewArray(const char*, char*);
void DisplayWords(char**);
int* key(char*);
int Partition(char**, int, int, Key);
void QuickSort(char**, int, int,Key);

int main()
{
	const char* stop = " !&?/\,.@:" ;
	char* array = new char[n];
	char ** newarray = new char*[n];

	cout << "Enter your array: ";
	cin.getline(array, n);
	cout << endl;

	DisplayWords(newarray);

	QuickSort(newarray,0, n-1, key);
	DisplayWords(newarray);

	system("pause");
	return 0;
}

char**NewArray(const char* stop, char* array)
{
	const char* letters = "ABCDEFGHIJKLMNOPQSTRVUWXYZabcedfghijklmnopqstrvuwxyz";
	char** newarray = new char*[n];

	int n = 0;
	char* pword = strpbrk(array, letters);
	while (pword)
	{
		int length = strspn(pword, letters);
		newarray[n] = new char[length + 1];
		strncpy(newarray[n], pword, length);
		newarray[n][length] = '\0';
		pword += length;
		pword = strpbrk(pword, letters);
		n++;
	}
	return newarray;
}

void DisplayWords(char** newarray)
{
	for (int i = 0; i < n; i++)
	{
		cout << (i + 1) << ". " << newarray[i] << endl;
	}
}

int* key(char* newarray)
{
	int*len = new int[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n;)
		{
			int dic = strlen(newarray);
			len[j] = dic;
			j++;
		}
	}
	return len;
}

int Partition(char** newarray, int low, int high, Key key)
{
	//int pivot = arr[high];  
	int i = (low - 1);


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (key(newarray[i])> key(newarray[i + 1]))
			{
				swap(newarray[i], newarray[i + 1]);
			}
		}
	}
	swap(newarray[i + 1], newarray[high]);
	return (i + 1);
}

void QuickSort(char** newarray, int low, int high, Key key)
{
	if (low < high)
	{
		int pi = Partition(newarray, low, high, key);
		QuickSort(newarray, low, pi - 1, key);
		QuickSort(newarray, pi + 1, high, key);
	}
}
