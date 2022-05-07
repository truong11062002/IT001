#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = DemGiaTri(b, k);
	cout << "\nSo luong cac phan tu ke nhau ma ca hai trai dau: " << kq;
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
int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0]*a[1]<0)
		dem++;
	for (int i = 1; i < n - 1; i++)
			if (a[i - 1] *a[i]<0 || a[i + 1]*a[i]<0)
				dem++;
	if (a[n - 1] *a[n-2] <0)
		dem++;
	return dem;
}
