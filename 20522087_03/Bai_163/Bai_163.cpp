#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int &,int);
bool ktChinhPhuong(int);
void XoaChinhPhuong(int[], int &);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nXoa chinh phuong trong mang: ";
	XoaChinhPhuong(b, k);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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
void XoaViTri(int a[], int &n,int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void XoaChinhPhuong(int a[], int &n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
}
