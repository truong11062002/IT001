#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = TrungBinhCong(b, k);
	cout << "\nTong trung binh cong cua cac so duong trong mang: " << kq;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s = s + a[i];
	return s;
}
int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
float TrungBinhCong(float a[], int n)
{
	float s = TongDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return s / dem;
}
