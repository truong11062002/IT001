#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemDuongDong(float[][100], int, int,int);
int main()
{
	float b[100][100];
	int k, l, d = 0;

	Nhap(b, k, l);
	Xuat(b, k, l);
	do
	{
		cout << "Nhap dong thu d: \n";
		cin >> d;
	} while (d > k - 1);
	
	int kq = DemDuongDong(b, k, l,d);
	cout << "Dem so luong duong: \n" << kq;
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
int DemDuongDong(float a[][100], int m, int n,int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
			if (a[d][j] > 0)
				dem++;
	return dem;
}
