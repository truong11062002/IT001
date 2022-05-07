#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac cot co gia tri tang: ";
	LietKe(b, k, l);
	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (201) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

int ktCot(int a[][100], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m - 1; i++)
	{
		if (a[i][c] > a[i+1][c])
			flag = 0;
	}
	return flag;
}

void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(6) << j;
}
