#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float Tong(float[][100], int, int, float, float);
int main()
{
	float b[100][100];
	int k, l;
	float x, y;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\Nhap y: ";
	cin >> y;

	Nhap(b, k, l);
	Xuat(b, k, l);

	float kq = Tong(b, k, l, x, y);
	cout << "Tong trong doan [" << x << "," << y << "]: " << kq;
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
float Tong(float a[][100], int m, int n, float x, float y)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (x < a[i][j] && a[i][j] < y)
				s = s + a[i][j];
	return s;
}
