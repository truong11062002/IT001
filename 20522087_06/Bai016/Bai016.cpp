#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Nhapxy(int&, int&);
void Xuat(int*, int);
void LietKe(int*, int,int,int);
int main()
{
	int* a;
	int n, x, y;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	Nhapxy(x, y);
	LietKe(a, n, x, y);
	delete[]a;
	return 1;
}
void Nhap(int* a, int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Nhapxy(int& x, int& y)
{
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;
}
void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(11);
}
void LietKe(int* a, int n, int x, int y)
{
	cout << "\nLiet ke cac gia tri chan: ";
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << a[i] << setw(10);
}



