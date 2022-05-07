#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void DichPhai(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nDich phai xoay vong: ";
	DichPhai(b, k);
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
void DichPhai(float a[], int n)
{
	float temp = a[n-1];
	for (int i = n-1; i >=0; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}
