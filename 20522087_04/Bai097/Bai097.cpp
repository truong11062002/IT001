#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktDong(float[][100], int, int, float);
bool ktCot(float[][100], int, int, float);
bool ktCheoChinh(float[][100], int, int, int, int, float);
bool ktCheoPhu(float[][100], int, int, int, int, float);
bool ktHoangHau(float[][100], int, int, int, int, float);
int DemHoangHau(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nKet qua: " << DemHoangHau(b, k, l);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	srand(time(NULL));
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
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

bool ktDong(float a[][100], int d, int n, float x)
{
	for (int j = 0; j < n; j++)
		if (a[d][j] > x)
			return false;
	return true;
}

bool ktCot(float a[][100], int m, int c, float x)
{
	for (int i = 0; i < m; i++)
		if (a[i][c] > x)
			return false;
	return true;
}

bool ktCheoChinh(float a[][100], int m, int n, int d, int c, float x)
{
	while (d >= 0 && c >= 0)
	{
		if (a[d][c] > x)
			return false;
		d--;
		c--;
	}
	while (d < m && c < n)
	{
		if (a[d][c] > x)
			return false;
		d++;
		c++;
	}
	return true;
}

bool ktCheoPhu(float a[][100], int m, int n, int d, int c, float x)
{
	while (d >= 0 && c < n)
	{
		if (a[d][c] > x)
			return false;
		d--;
		c++;
	}
	while (d >= 0 && c < n)
	{
		if (a[d][c] > x)
			return false;
		d--;
		c++;
	}
	return true;
}

bool ktHoangHau(float a[][100], int d, int c, int m, int n, float x)
{
	if (ktDong(a, d, n, x) == true && ktCot(a, m, c, x) == true && ktCheoChinh(a, m, n, d, c, x) == true && ktCheoPhu(a, m, n, d, c, x) == true)
		return true;
	return false;
}

int DemHoangHau(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktHoangHau(a, i, j, m, n, a[i][j]) == true)
				dem++;
	return dem;
}