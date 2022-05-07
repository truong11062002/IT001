#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, float);
void LietKe(int[], int, int[], int);
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
	cout << "\nLiet ke cac gia tri chi xuat hien mot trong hai mang: ";
	LietKe(b, k, d, l);
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
int TanSuat(int a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(8) << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, m, b[i]) == 0 && flag)
			cout << setw(8) << b[i];
	}
}
