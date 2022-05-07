#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int [], int, int[], int);
int main()
{
	int b[100], d[100];
	int k, l;
	cout << "\nNhap so luong cua mang a: ";
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nNhap so luong cua mang b: ";
	Nhap(d, l);
	Xuat(d, l);
	int kq = DemXuatHien(b, k, d, l);
	cout << "\nSo lan xuat hien cua mang a trong b: " << kq;
	return 1;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i] << " ";
	}
}
int DemXuatHien(int a[], int n, int b[], int m)
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
