#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&, float&, int &);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);
int main()
{
	float b[100];
	int k, t;
	float x;
	Nhap(b, k, x, t);
	Xuat(b, k);

	cout << "\nThem phan tu x vao mang: ";
	ThemViTri(b, k, x, t);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void Nhap(float a[], int& n, float& x, int &k)
{
	cout << "Nhap vi tri k: ";
	cin >> k;
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
		cout << setw(5) << fixed << setprecision(3) << a[i] << " ";
	}
}
void ThemViTri(float a[], int& n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}
