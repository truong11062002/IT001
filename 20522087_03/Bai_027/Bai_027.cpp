#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
void LietKe(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nVi tri giong voi mang " << AmDau(b, k) << " dau tien la:  ";
	LietKe(b, k);
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
float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}
void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	if (ad == 0)
	{
		cout << "\nKhong co gia tri am";
		return;
	}
	for (int i = 0; i <n ; i++)
		if (a[i] == ad)
			cout << i;
}