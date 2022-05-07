#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TimX(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = TimX(b, k);
	cout << "\nDoan [" << -kq << "," << kq << "] chua tat ca gia tri cua mang";
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
float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}
