#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int& ,int &);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
int main()
{
	float b[100];
	int k, l;
	Nhap(b, k,l);
	Xuat(b, k);

	cout << "\nXoa phan tu mang tai vi tri k: ";
	XoaViTri(b, k,l);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void Nhap(float a[], int& n,int &k)
{
	cout << "Nhap vi tri k: ";
	cin >> k;
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
