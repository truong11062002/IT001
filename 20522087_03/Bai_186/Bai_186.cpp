#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int M;
	cout << "\nNhap M: ";
	cin >> M;
	int vtd, vtc;
	TimCon(b, k, M, vtd, vtc);
	cout << "\nMang con co tong cac phan tu bang M: ";
	if (vtd == -1)
		cout << "Khong co day";
	else
		for (int i = vtd; i <= vtc; i++)
			cout << b[i] << " ";
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
int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

