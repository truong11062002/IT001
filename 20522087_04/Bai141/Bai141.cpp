#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XepTang(float[], int);
void XepZ(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nKet qua: " << endl;
	XepZ(b, k, l);
	Xuat(b, k, l);
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

void XepTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void XepZ(float a[][100], int m, int n)
{
	float b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	XepTang(b, k);
	k = 0;
	for (int i = 0; i < m; i++)
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
				a[i][j] = b[k++];
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
				a[i][j] = b[k++];
		}
}