#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DaoDong(float[][100], int, int, int);
void ChieuGuongDoc(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);

	ChieuGuongDoc(b, k, l);
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

void DaoDong(float a[][100], int m, int n, int d)
{
	int dd = 0;
	int cc = n - 1;
	while (dd < cc)
	{
		float temp = a[d][dd];
		a[d][dd] = a[d][cc];
		a[d][cc] = temp;
		dd++;
		cc--;
	}
}

void ChieuGuongDoc(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DaoDong(a, m, n, i);
}