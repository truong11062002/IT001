#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongCon(float[], int, int, int);
void XuatCon2(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nTong mang con va mang con tang: \n";
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
int ktCon(float  a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void XuatCon2(float a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				cout << TongCon(a, n, vt, l);
				for (int i = 0; i < l; i++)
					cout << setw(4) << "  " << a[vt + i];
				cout << "\n";
			}
		}
	}
}