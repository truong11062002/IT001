#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&, int&);
int ucln(int, int);
int main()
{
	int a, b;
	Nhap(a, b);
	int kq1 = ucln(a, b);
	cout << "Uoc chung lon nhat la " << kq1;
	return 1;
}
void Nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
int ucln(int m, int n)
{
	m = abs(m);
	n = abs(n);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int kq = m + n;
	return kq;
}