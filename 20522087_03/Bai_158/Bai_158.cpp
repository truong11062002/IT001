#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void DichTrai(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nDich trai xoay vong: ";
	DichTrai(b, k);
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
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n-2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}
