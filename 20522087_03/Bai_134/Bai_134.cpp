#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktnt(int);
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
bool ktnt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (ktnt(a[i]))
		{
			b[k] = a[i];
			k++;
		}
}