#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ChanTang(int[], int);
void LeTang(int[], int);
void ChanTangLeTang(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nMang sau khi sap xep: ";
	ChanTangLeTang(b, k);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
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
		cout << setw(3) << a[i] << " ";
	}
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void ChanTang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] % 2 !=0 && a[j] % 2!=0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}
void LeTang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] % 2==0 && a[j] % 2==0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}
void ChanTangLeTang(int a[], int n)
{
	ChanTang(a, n);
	LeTang(a, n);
}