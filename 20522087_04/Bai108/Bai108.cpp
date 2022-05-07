#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCotGiam(float[][100], int, int, int);
int ktDongGiam(float[][100], int, int, int);
int ktGiam(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
	int kq = ktGiam(b, k, l);
	if (kq == 1)
		cout << "Giam dan theo dong va cot  ";
	else
		cout << "Khong giam dan theo dong va cot ";
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
int ktCotGiam(float a[][100], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m - 1; i++)
	{
		if (a[i][c] < a[i + 1][c])
		{
			flag = 0; break;
		}
	}
	return flag;
}
int ktDongGiam(float a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j] < a[d][j + 1])
		{
			flag = 0; break;
		}
	return flag;
}
int ktGiam(float a[][100], int m, int n)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCotGiam(a, m, n, j) == 0 || ktDongGiam(a, m, n, i) == 0)
			{
				flag = 0; break;
			}
	return flag;
}