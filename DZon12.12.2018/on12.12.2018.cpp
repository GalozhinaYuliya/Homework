#include <iostream>

using namespace std;

const int M = 100;
void MatrixOneandZero(int matrix[M][M], int n);
void DisplayMatrix(int matrix[M][M], int n);
void MatrixDiag(int matrix[M][M], int n);
void initMatrix(int matrix[][M], int n, int m);
void MatrixStl(int matrix[M][M], int n, int m);
void MatrixStr(int matrix[M][M], int n, int m);


int main()
{
	int matrix[M][M] = { 0 };
	int n, m;

	cout << "Enter n ";
	cin >> n;

	cout << "Enter m ";
	cin >> m;

	MatrixOneandZero(matrix, n);
	DisplayMatrix(matrix, n);
	cout << endl;
	
	MatrixDiag(matrix, n);
	DisplayMatrix(matrix, n);
	cout << endl;

	initMatrix(matrix, n, m);
	MatrixStl(matrix, n, m);
	DisplayMatrix(matrix, n);
	cout << endl;

	MatrixStr(matrix, n, m);
	DisplayMatrix(matrix, n);



	system("pause");
}
void MatrixOneandZero(int matrix[M][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				matrix[i][j] = n;
			}
			else if (j > i)
			{
				matrix[i][j] = 0;
			}
			else
			{
				matrix[i][j] = n - (i - j);
			}
		}
	}
}
void DisplayMatrix(int matrix[M][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}

		cout << endl;
	}
}
void MatrixDiag(int matrix[M][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < n / 2)
			{
				if (i == 0)
				{
					matrix[i][j] = 1;
				}
				else if (i - j > 0 || j >= n - i)
				{
					matrix[i][j] = 0;
				}
				else
				{
					matrix[i][j] = 1;
				}
			}
			else
			{
				if (i == n - 1)
				{
					matrix[i][j] = 1;
				}

				else if (j - i >= 1 || i < (n - 1) - j)
				{
					matrix[i][j] = 0;
				}
				else
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
}
void initMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "matrix[" << i + 1 << "," << j + 1 << "] = ";
			cin >> matrix[i][j];
		}
	}
}
void MatrixStl(int matrix[M][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			swap(matrix[i][j], matrix[i][m - 1]);
		}
	}

}
void MatrixStr(int matrix[M][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			swap(matrix[i][j], matrix[n - 1][j]);
		}
	}

}
