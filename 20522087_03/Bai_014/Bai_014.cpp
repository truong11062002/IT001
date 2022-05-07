#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
void LietKe(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nVi tri cac so chinh phuong: " << endl;
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
bool ktChinhPhuong(int n)
{
	for (int i = 0; (i*i) <= n; i++)
		if ((i * i)== n)
			return true;
	return false;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]) == true && a[i] > 0)
			cout << i << " ";
}
