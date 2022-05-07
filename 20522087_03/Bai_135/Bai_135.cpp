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

	cout << "\nPhan tu cua mang b: ";
	XayDung(b, k, d, l);
	Xuat(d, l);
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
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i <= n - 2; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}
