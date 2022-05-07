#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool ktCon(float[], int, int, int);
void XuatCon2(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nMang con duong co do dai lon hon 1: \n";
	XuatCon2(b, k);
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
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			return false;
	return true;
}
void XuatCon2(float a[], int n)
{
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - 1; vt++)
		{
			if (ktCon(a, n, vt, l) == true)
			{
				for (int i = 0; i < l; i++)
					cout << setw(4) << "  " << a[vt + i];
				cout << "\n";
			}
		}
	}
}