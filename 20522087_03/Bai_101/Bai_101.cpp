#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktnt(int);
int NguyenToDau(int[], int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	cout << "\nNguyen to lon nhat: " << kq;
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
bool ktnt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int NguyenToDau(int a[], int n)
{
	for (int i = 1; i <= n; i++)
		if (ktnt(a[i]))
			return a[i];
	return 0;
}
int TimGiaTri(int a[], int n)
{
	float lc = NguyenToDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>lc)
			lc = a[i];
	return lc;
}