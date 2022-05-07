#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);
int main()
{
	int b[100], d[100];
	int k, l;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac phan tu mang b: ";
	XayDung(b, k, d, l);
	Xuat(d, l);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << a[i] << " ";
	}
}
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
}