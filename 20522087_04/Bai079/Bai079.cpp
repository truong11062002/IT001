#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float NhoNhat(float[][100], int, int);
int DemNhoNhat(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = DemNhoNhat(b, k, l);
	cout << "So luong gia tri nho nhat trong ma tran: \n" << kq;
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
float NhoNhat(float a[][100], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < lc)
				lc = a[i][j];
		}
	return lc;
}
int DemNhoNhat(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (NhoNhat(a, m, n) == a[i][j])
				dem++;
	return dem;
}
