#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Xuat(int*, int);
int ChuSoDau(int);
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

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
void LietKe(int* a, int n)
{
	cout << "\nLiet ke cac so nguyen co chu so dau tien la le: \n";
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i] << setw(6);
}
