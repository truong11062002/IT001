#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);
int main()
{
	int b[100], d[100], e[100];
	int k, l, h;
	cout << "\nNhap sl mang a: ";
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nNhap sl mang b: ";
	Nhap(d, l);
	Xuat(d, l);
	cout << "\nTron 2 mang theo thu tu tang: ";
	Tron(b, k, d, l, e, h);
	for (int i = 0; i < h; i++)
	{
		cout << e[i] << " ";
	}
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
		cout << setw(3) << a[i] << " ";
	}
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i>=n && j>=m))
	{
		if ((i < n && j<m && a[i] < b[j]) || j >= m)
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}
