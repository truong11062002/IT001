#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&,float &);
void Xuat(float[], int);
int TanSuat(float[], int, float);
int main()
{
	float b[100];
	int k;
	float x;
	Nhap(b, k ,x);
	Xuat(b, k);

	int kq = TanSuat(b, k, x);
	cout << "\nSo lan xuat hien x trong mang: " << kq;
	return 1;
}
void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap x: ";
	cin >> x;
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
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
