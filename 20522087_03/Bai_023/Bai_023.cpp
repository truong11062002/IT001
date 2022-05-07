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

	cout << "\nGia tri thoa man dieu kien: ";
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
	if (n <= 1)
		return;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
		if (a[i - 1] % 2 == 0 && a[i + 1] % 2 == 0)
			cout << a[i] << " ";
	if (a[n - 1] % 2 == 0 && a[n + 1] % 2 == 0)
		cout << a[n - 1] << " ";
}
