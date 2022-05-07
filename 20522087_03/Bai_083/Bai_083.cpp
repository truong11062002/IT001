#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Nhapxy(int&, int&);
void Xuat(int[], int);
int DauTien(int[], int, int, int);
int main()
{
	int b[100];
	int k, z, t;
	Nhapxy(z, t);
	Nhap(b, k);
	Xuat(b, k);

	int kq = DauTien(b, k, z, t);
	cout << "\nGia tri dau tien cua mang trong doan [" << z << "," << t << "]: " << kq;
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
void Nhapxy(int& x, int& y)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i] << " ";
	}
}
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}