#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void Xoay90(float[][100], int&, int&);
void Xoay270(float[][100], int&, int&);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);

	Xoay270(b, k, l);
	cout << "\nMa tran sau khi xoay 270 do: \n";
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

void Xoay90(float a[][100], int& m, int& n)
{
	float b[100][100];
	int k, l;

	k = n;
	l = m;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];

	m = k;
	n = l;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

void Xoay270(float a[][100], int& m, int& n)
{
	Xoay90(a, m, n);
	Xoay90(a, m, n);
	Xoay90(a, m, n);
}