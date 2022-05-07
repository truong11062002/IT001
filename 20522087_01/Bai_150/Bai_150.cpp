#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int kq = abs(a * b) / (m + n);
	cout << "BCNN la: " << kq;
	return 0;
}