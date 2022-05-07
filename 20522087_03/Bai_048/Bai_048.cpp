#include<iostream>
#include<iomanip>
#include<ctime>
#include<cmath>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = TrungBinhNhan(b, k);
	cout << "\nTrung binh nhan cua cac phan tu duong cua mang: " << kq;
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
float TichDuong(float a[], int n)
{
	float T = 1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	return T;
}
int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
}