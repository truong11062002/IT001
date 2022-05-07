#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = DemGiaTri(b, k);
	cout << "\nSo luong gia tri duong chia het cho 7 trong mang: " << kq;
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
		cout << setw(6) << a[i] << " ";
	}
}
int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] % 7 == 0)
			dem++;
	return dem;
}
