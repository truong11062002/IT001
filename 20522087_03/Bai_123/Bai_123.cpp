#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = ktDoiXung(b, k);
	cout << "\nKiem tra doi xung: " << kq;
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
int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
}
