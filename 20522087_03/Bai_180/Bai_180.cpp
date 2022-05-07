#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool ktCon(float[], int, int, int);
int DemConTang(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = DemConTang(b, k);
	cout << "\nDem con tang: \n" << kq;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << fixed << setprecision(3) << a[i] << " ";
	}
}
bool ktCon(float  a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			return false;
	return true;
}
int DemConTang(float a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == true)
				dem++;
		}
	}
	return dem;
}