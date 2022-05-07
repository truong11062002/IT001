#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);
int DemGiaTri(float[], int, float[], int);
int main()
{
	float b[100], d[100];
	int k, l;
	cout << "\nNhap so phan tu cua mang a: ";
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nNhap so phan tu cua mang b: ";
	Nhap(d, l);
	Xuat(d, l);
	int kq = DemGiaTri(b, k,d,l);
	cout << "\nSo luong gia tri chi xuat hien mot lan trong 2 mang: " << kq;
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
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int DemGiaTri(float a[], int n, float b[], int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}
