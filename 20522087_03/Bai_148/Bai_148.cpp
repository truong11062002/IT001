#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void BienDoi(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nBien doi lon nhat thanh nho nhat va nguoc lai: ";
	BienDoi(b, k);
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
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void BienDoi(float a[], int n)
{
	float ln = LonNhat(a, n);
	float nn = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln || a[i] == nn)
			a[i] = ln + nn - a[i];
	}
}
