#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ViTriLeTang(int [], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nPhan tu cua mang b:";
	ViTriLeTang(b, k);
	Xuat(b, k);
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
		cout << setw(3) << a[i] << " ";
	}
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void ViTriLeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}
