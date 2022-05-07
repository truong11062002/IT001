#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichPhaiDong(float[][100], int, int, int);
void DichPhai(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Ma tran sau khi bien doi: \n";
	DichPhai(b, k, l);
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
void DichPhaiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][n-1];
	for (int j = n-1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}
void DichPhai(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichPhaiDong(a, m, n, i);
}
