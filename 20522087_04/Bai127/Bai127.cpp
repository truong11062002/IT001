#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapDongTang(float[][100], int, int, int);
void SapDongGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Sap xep chan va le tang trong dong \n";
	SapXep(b, k, l);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapDongTang(float a[][100], int m, int n, int d)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
}
void SapDongGiam(float a[][100], int m, int n, int d)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
}
void SapXep(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
	}
}
