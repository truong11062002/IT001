#include<iostream>
#include<cmath>
using namespace std;
int TichSoLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TichSoLe(n);
	cout << "Tich chu so chan la: " << kq;
	return 1;
}
int TichSoLe(int k)
{
	int T = 1;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			T = T * dv;
	}
	return T;
}