#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Nhapxy(int&, int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);
int main()
{
	int b[100];
	int k;
	int x, y;
	Nhapxy(x, y);
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nCac so thuoc thuoc doan [ " << x << y << " ]: ";
	LietKe(b, k, x, y);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Nhapxy(int& x, int& y)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << a[i] << " ";
}
