#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
int TongGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TongGiaTri(b, k);
	cout << "\nTong cac gia tri co chu so hang chuc la 5: " << kq;
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
		cout << setw(6) << a[i] << " ";
	}
}
int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}
int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (HangChuc(a[i]) == 5)
			s = s + a[i];
	}
	return s;
}
