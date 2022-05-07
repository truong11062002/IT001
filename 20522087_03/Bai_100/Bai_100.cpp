#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
float AmLonNhat(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	float kq = AmLonNhat(b, k);
	cout << "\nGia tri am lon nhat: " << kq;
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
float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}
float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>lc)
			lc = a[i];
	return lc;
}
