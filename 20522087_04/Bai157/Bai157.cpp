#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichLenCot(float[][100], int, int, int);
void DichLen(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Ma tran bien doi: \n";
	DichLen(b, k, l);
	Xuat(b, k, l);
	return 1;
}

void Nhap(float a[][100], int& m, int& n)
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
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
		}
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
void DichLenCot(float a[][100], int m, int n, int c)
{
	float temp = a[0][c];
	for (int i = 0; i <= m -2; i++)
		a[i][c] = a[i + 1][c];
	a[m-1][c] = temp;
}
void DichLen(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichLenCot(a, m, n, j);
}
