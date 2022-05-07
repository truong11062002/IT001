#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCot(float[][100], int, int,int);
float TongNhoNhat(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	float kq = TongNhoNhat(b, k, l);
	cout << "Tong cot nho nhat: \n" << kq;
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
float TongCot(float a[][100], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s = s + a[i][c];
	return s;
}
float TongNhoNhat(float a[][100], int m, int n)
{
	float lc = TongCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) < lc)
			lc = TongCot(a, m, n, j);
	return lc;
}
