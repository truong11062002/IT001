#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
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
int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] * a[i - 1] > 0) && (abs(a[i] > abs(a[i - 1]))))
			dem++;
	return dem;
}
