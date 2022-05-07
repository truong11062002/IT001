#include<iostream>
#include<iomanip>
#include<ctime>
#include<fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Xuat(float[], int, string);
int main()
{
	float b[100];
	int k;
	string filename = "floatdata.inp";
	Nhap(b, k);
	Xuat(b, k);
	Xuat(b, k, filename);
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
void Xuat(float a[], int n, string filename)
{
	ofstream fo(filename);
	for (int i = 0; i < n; i++)
		fo << a[i] << setw(10);
}
