#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Xuat(int*, int);
void LietKe(int*, int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	delete[]a;
	return 1;
}
void Nhap(int* a, int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(11);
}
void LietKe(int* a, int n)
{
	cout << "\nLiet ke cac gia tri chan: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << setw(10);
}

