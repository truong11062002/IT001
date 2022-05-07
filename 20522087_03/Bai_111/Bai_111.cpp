#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b,k);
	cout << "\nChan lon nhat va nho hon moi gia tri le trong mang: " << kq;
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
int LeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 1)
			return a[i];
	return 0;
}
int LeNhoNhat(int a[], int n)
{
	int lc = LeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}
