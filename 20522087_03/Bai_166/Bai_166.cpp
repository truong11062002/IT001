#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int& ,int &);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaTrungX(int[], int&, int);
int main()
{
	int b[100];
	int k, l;
	Nhap(b, k,l);
	Xuat(b, k);
	
	cout << "\nXoa phan tu trung voi x: ";
	XoaTrungX(b, k, l);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void Nhap(int a[], int& n,int &x)
{
	cout << "Nhap x: ";
	cin >> x;
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
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrungX(int a[], int& n, int x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}