#include<iostream>
#include<cmath>
using namespace std;
int DaoNguoc(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = DaoNguoc(n);
	cout << "So dao nguoc cua n la: " << kq;
	return 1;
}
int DaoNguoc(int k)
{
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	return dn;
}
