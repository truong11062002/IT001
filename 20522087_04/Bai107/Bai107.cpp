#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCotGiam(float[][100], int, int, int);
int main()
{
	float b[100][100];
	int k, l, c;

	Nhap(b, k, l);
	Xuat(b, k, l);
	do
	{
		cout << "Nhap cot thu c: \n";
		cin >> c;
	} while (c > l - 1);
	int kq = ktCotGiam(b, k, l, c);
	if (kq == 1)
		cout << "Giam dan ";
	else
		cout << "Khong giam dan ";
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
		if (a[i][c] < a[i+1][c])
			flag = 0;
	}
	return flag;
}
