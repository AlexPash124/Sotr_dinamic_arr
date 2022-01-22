
#include <iostream>
using namespace std;
void selectionArr(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 3;
		}
	}
}
void printArr(int** matrix, int n, int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout << endl;
	}
}
void sortArr(int** a, int n, int m) {
	for (int l = 0; l < n; l++)
	{
		for (int k = 0; k < m; k++)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if (j + 1 == m && i + 1 == n) continue;
						else
							if (j + 1 == m && a[i][j] > a[i + 1][0])
								swap(a[i][j], a[i + 1][0]);
							else
								if (j + 1 == m) continue;
								else
									if (a[i][j] > a[i][j + 1])
										swap(a[i][j], a[i][j + 1]);
				}
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int **matrix = nullptr;
	int n = 6;
	int m = 3;
	matrix = new int*[n];
	int sum = 0;

	selectionArr(matrix, n, m);
	printArr(matrix, n, m);
	sortArr(matrix, n, m);
	cout << endl;
	printArr(matrix, n, m);
	


	for (int i = 0; i < n; i++)
	{
		delete matrix[i];
	}delete [] matrix;
}
