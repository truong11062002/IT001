#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int DemDoiXung(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = DemDoiXung(b, k);
	cout << "\nSo luong doi xung trong mang: " << kq;
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
bool ktDoiXung(int n)
{
	int dn = 0;
	for (int t = abs(n); t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	if (dn == n)
		return true;
	return false;
}
int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if(ktDoiXung(a[i]))
			dem++;
	return dem;
}

