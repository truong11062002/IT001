#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&,float);
int TanSuat(float[], int, float);
void XoaPhanTu(float[], int&);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nXoa phan tu xuat hien nhieu hon mot lan cua mang: ";
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
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i <= n-1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void XoaPhanTu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (TanSuat(a, n, a[i] > 1))
			XoaTrung(a,n,a[i]);
}
