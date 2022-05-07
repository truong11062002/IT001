#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float LonNhatCot(float[][100], int, int, int);
void ThemDong(float[][100], int&, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Ma tran sau khi them: \n";
	ThemDong(b, k, l);
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
float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m-1; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}
void ThemDong(float a[][100], int& m, int n)
{
	int d=m++;
	for (int j = 0; j < n; j++)
		a[d][j] = LonNhatCot(a,m,n,j);
}
