#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void MostSum(int[][100], int, int);
void MostSum_row(int[][100], int, int, int, int&, int&, int&, int&, int&);
void MostSum_column(int[][100], int, int, int, int&, int&, int&, int&, int&);
void MostSum_diagonal(int[][100], int, int, int, int, int&, int&, int&, int&, int&);
void Display(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int x, y;
	Nhap(a, x, y);
	Xuat(a, x, y);
	cout << "Ma tran con co tong lon nhat la: " << endl;
	MostSum(a, x, y);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	srand(time(NULL));
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 201 - 100;
		}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void MostSum(int a[][100], int x, int y)
{
	int max = a[0][0];
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
		{
			MostSum_row(a, i, y, j, x1, y1, x2, y2, max);
			MostSum_column(a, x, j, i, x1, y1, x2, y2, max);
			MostSum_diagonal(a, x, y, i, j, x1, y1, x2, y2, max);
		}
	Display(a, x1, y1, x2, y2);
}

void MostSum_row(int a[][100], int x, int y, int y_head, int& x1, int& y1, int& x2, int& y2, int& max)
{
	int sum = 0;
	int x_bd = x1;
	int y_bd = y_head;
	for (int i = y_head; i < y; i++)
	{
		sum = sum + a[x][i];
		if (sum > max)
		{
			max = sum;
			x1 = x_bd;
			y1 = y_bd;
			x2 = x;
			y2 = i;
		}
	}
}

void MostSum_column(int a[][100], int x, int y, int x_head, int& x1, int& y1, int& x2, int& y2, int& max)
{
	int sum = 0;
	int x_bd = x_head;
	int y_bd = y1;
	for (int i = x_head; i < x; i++)
	{
		sum = sum + a[i][y];
		if (sum > max)
		{
			max = sum;
			x1 = x_bd;
			y1 = y_bd;
			x2 = i;
			y2 = y;
		}
	}
}

void MostSum_diagonal(int a[][100], int x, int y, int x_head, int y_head, int& x1, int& y1, int& x2, int& y2, int& max)
{
	int sum = 0;
	int x_bd = x_head;
	int y_bd = y_head;
	for (int i = x_head, j = y_head; i < x; i++)
	{
		for (int u = x_head; u <= i; u++)
			for (int v = y_head; v <= j; v++)
				sum = sum + a[u][v];
		if (sum > max)
		{
			max = sum;
			x1 = x_bd;
			y1 = y_bd;
			x2 = i;
			y2 = j;
		}
		j++;
		sum = 0;
	}
	sum = 0;
	for (int i = x_head; i < x; i++)
	{
		for (int j = y_head; j < y; j++)
		{
			sum = sum + a[i][j];
		}
		if (sum > max)
		{
			max = sum;
			x1 = x_bd;
			y1 = y_bd;
			x2 = i;
			y2 = y - 1;
		}
	}
}

void Display(int a[][100], int x1, int y1, int x2, int y2)
{
	for (int i = x1; i <= x2; i++)
	{
		for (int j = y1; j < y2; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}