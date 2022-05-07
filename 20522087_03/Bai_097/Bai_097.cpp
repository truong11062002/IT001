#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = ViTriCuoi(b, k);
	cout << "\nVi tri hoan thien cuoi: " << kq;
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
bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}
int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i]))
			return i;
	return -1;
}
