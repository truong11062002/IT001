#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Xuat(int*, int);
bool ktnt(int);
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
bool ktnt(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (abs(k) % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void LietKe(int* a, int n)
{
	cout << "\nLiet ke vi tri nguyen to: ";
	for (int i = 0; i < n; i++)
		if (ktnt(a[i]))
			cout << i << setw(10);
}

