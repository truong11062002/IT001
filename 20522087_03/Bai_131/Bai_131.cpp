#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	cout << "\nDem so luong gia tri lon hon tat ca gia tri truoc no: " << kq;
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
int TimGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}
