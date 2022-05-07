#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);
int ktThuoc(float[], int, float[], int);
int main()
{
	float b[100], d[100];
	int k,l;
	cout << "\nNhap so luong mang a: ";
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nNhap so luong mang b: ";
	Nhap(d, l);
	Xuat(d, l);
	int kq = ktThuoc(b, k, d, l);
	cout << "\nKiem tra a co thuoc b khong: " << kq;
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
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int ktThuoc(float a[], int n, float b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}
