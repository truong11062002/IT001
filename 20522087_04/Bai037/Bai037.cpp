#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&, int&);
void Xuat(float[][100], int, int);
float TongDong(float[][100], int, int, int);
int main()
{
	float b[100][100];
	int k, l, d;

	Nhap(b, k, l, d);
	Xuat(b, k, l);

	float kq = TongDong(b, k, l, d);
	cout << "Tong duong tren mot dong: \n" << kq;
	return 1;
}

void Nhap(float a[][100], int& m, int& n, int& d)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	do
	{
		cout << "Nhap dong thu d: \n";
		cin >> d;
	} while (d > m - 1);
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
float TongDong(float a[][100], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		if(a[d][j]>0)
			s = s + a[d][j];
	return s;
}
