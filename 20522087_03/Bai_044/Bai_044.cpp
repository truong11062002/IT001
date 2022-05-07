#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float [], int );
float TongCucDai(float[], int);
float TongCucTri(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = TongCucTri(b, k);
	cout << "\nTong cac phan tu cuc tri cua mang: " << kq;
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
float TongCucTieu(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}
float TongCucDai(float a[], int n)
{
	if (n == 1)
		return 0;
	float s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	}
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}
float TongCucTri(float a[], int n)
{
	float s1 = TongCucDai(a, n);
	float s2 = TongCucTieu(a, n);
	return s1 + s2;
}
