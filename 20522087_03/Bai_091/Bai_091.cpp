#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int DauTien(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = DauTien(b, k);
	cout << "\nGia tri doi xung dau tien: " << kq;
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
bool ktDoiXung(int n)
{
	int dn = 0;
	for (int t = abs(n); t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	if (dn == n)
		return true;
	return false;
}
int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
			return a[i];
	return -1;
}