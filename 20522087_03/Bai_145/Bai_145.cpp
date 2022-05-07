#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void DuongTang(float[], int);
void AmGiam(float[], int);
void DuongTangAmGiam(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDuong tang am giam: ";
	DuongTangAmGiam(b, k);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
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
		cout << setw(5) << fixed << setprecision(3) << a[i] << " ";
	}
}
void HoanVi(float& x, float& y)
{
		float temp = x;
		x = y;
		y = temp;
}
void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[i])
				HoanVi(a[i], a[j]);
}
void AmGiam(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[i])
				HoanVi(a[i], a[j]);
}
void DuongTangAmGiam(float a[], int n)
{
	DuongTang(a, n);
	AmGiam(a, n);
}

