#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
int DonVi(int);
int main()
{
	int n;
	Nhap(n);
	int kq = DonVi(n);
	cout << "Chu so hang don vi la: " << kq;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int DonVi(int k)
{
	int dv = k % 10;
	return dv;
}
