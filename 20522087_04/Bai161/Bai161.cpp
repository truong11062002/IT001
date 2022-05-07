#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichTrai(float[], int);
void DichBienTang(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Ma tran sau khi bien doi: \n";
	DichBienTang(b, k, l);
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
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <n-1; i++)
		a[i] = a[i + 1];
	a[n-1] = temp;
}
void DichBienTang(float a[][100], int m, int n)
{
	float b[100];
	int k = 0;
	for (int j = 0; j < n; j++)
		b[k++] = a[0][j];
	for (int i = 1; i < m - 1; i++)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j > 0; j--)
		b[k++] = a[m - 1][j];
	for (int i = m - 1; i > 0; i--)
		b[k++] = a[i][0];
	DichTrai(b, k);
	k = 0;
	for (int j = 0; j < n; j++)
		a[0][j] = b[k++];
	for (int i = 1; i < m - 1; i++)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j > 0; j--)
		a[m - 1][j] = b[k++];
	for (int i = m - 1; i > 0; i--)
		a[i][0] = b[k++];
}

