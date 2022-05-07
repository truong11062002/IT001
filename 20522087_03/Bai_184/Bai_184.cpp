#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemCon(float[], int, float[], int);
int main()
{
	float b[100], d[100];
	int k, l;
	cout << "\nNhap so luong mang a: ";
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nNhap so luong mang b: ";
	Nhap(d, l);
	Xuat(d, l);

	int kq = DemCon(b, k, d, l);
	cout << "\nKiem tra so lan a xuat hien trong b : " << kq;
	return 1;
}
void Nhap(float a[], int& n)
{
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
int DemCon(float a[], int n, float b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}
