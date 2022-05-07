#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	cout << "\nTan suat xuat hien nhieu nhat: " << kq;
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (TanSuat(a,n,a[i]) > TanSuat(a,n,lc))
			lc = a[i];
	return lc;
}
