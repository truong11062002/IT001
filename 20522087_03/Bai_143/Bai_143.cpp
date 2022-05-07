#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTang(float[], int);
int ktHoanVi(float[], int, float[], int);
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

	int kq = ktHoanVi(b, k, d, l);
	cout << "\nKiem tra hoan vi a va b: " << kq;
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
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void SapTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; i++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(float a[], int n, float b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] = b[i])
			flag = 0;
	return flag;
}
