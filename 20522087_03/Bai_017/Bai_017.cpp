#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac gia tri chan trong mang: " << endl;
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
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i];
	cout << endl;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << a[i] << " ";
}
