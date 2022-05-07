#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DuongGiam(float[][100], int, int);
void AmTang(float[][100], int, int);
void SapXep(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Ket qua sap xep: \n";
	SapXep(b, k, l);
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
void DuongGiam(float a[][100], int m, int n)
{
	float b[100];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				b[k++] = a[i][j];
	for (i = 0; i < k - 1; i++)
		for (j = i+1; j < k; j++)
			if(b[i] < b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = b[k++];
}
void AmTang(float a[][100], int m, int n)
{
	float b[100];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	for (i = 0; i < k - 1; i++)
		for (j = 0; j < k; j++)
			if (b[i] > b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = b[k++];
}
void SapXep(float a[][100], int m, int n)
{
	AmTang(a, m, n);
	DuongGiam(a, m, n);
}
