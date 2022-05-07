#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);
int main()
{
	float b[100], d[100];
	int k, l;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac phan tu mang b: ";
	XayDung(b, k, d, l);
	Xuat(d,l);
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
void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[k] = a[i];
			k++;
		}
	}
}