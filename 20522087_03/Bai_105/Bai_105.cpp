#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int[], int);
int ToanLeDauTien(int[], int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	cout << "\nCac gia tri toan chu so le: " << kq;
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
bool ktToanLe(int n)
{
	for (int t = n; t != 0; t = t / 10)
		if (t % 2 == 0)
			return false;
	return true;
}
int ToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i])!=0)
			return a[i];
	return 0;
}
int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
	return 0;
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}
