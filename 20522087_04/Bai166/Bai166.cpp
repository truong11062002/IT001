#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DaoCot(float[][100], int, int, int);
void ChieuGuongNgang(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);

	ChieuGuongNgang(b, k, l);
	cout << "\nMa tran sau khi bien doi: \n";
	Xuat(b, k, l);
	return 1;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
	}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

void DaoCot(float a[][100], int m, int n, int c)
{
	int dd = 0;
	int cc = m - 1;
	while (dd < cc)
	{
		float temp = a[dd][c];
		a[dd][c] = a[cc][c];
		a[cc][c] = temp;
		dd++;
		cc--;
	}
}

void ChieuGuongNgang(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		DaoCot(a, m, n, j);
}