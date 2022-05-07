#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCot(float[][100], int, int, int);
void XoaCot(float[][100], int, int&, int);
void XoaCot(float[][100], int, int&);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);

	XoaCot(b, k, l);
	cout << "\nMa tran sau khi xoa: \n";
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

int ktCot(float a[][100], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] > 0)
			flag = 0;
	return flag;
}

void XoaCot(float a[][100], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
		for (int j = c; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;
}

void XoaCot(float a[][100], int m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCot(a, m, n, j) == 1)
				XoaCot(a, m, n, j);
}