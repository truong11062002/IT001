#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac so nguyen co chu so dau tien la le: " << endl;
	LietKe(b, k);
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
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i] << " ";
}