#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&,float &);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);
int main()
{
	float b[100];
	int k;
	float x;
	Nhap(b, k,x);
	Xuat(b, k);

	cout << "\nGiu nguyen tinh don dieu tang: ";
	ThemBaoToan(b, k,x);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void Nhap(float a[], int& n,float &x)
{
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
void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}
