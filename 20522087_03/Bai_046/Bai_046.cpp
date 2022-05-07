#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktnt(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TrungBinhCong(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = TrungBinhCong(b, k);
	cout << "\nTrung binh cong cua nguyen to trong mang: " << kq;
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
int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktnt(a[i]))
			dem++;
	return dem;
}
int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ktnt(a[i]))
			s = s + a[i];
	return s;
}
float TrungBinhCong(int a[], int n)
{
	int s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}