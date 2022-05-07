#include<iostream>
#include<cmath>
using namespace std;
int TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TinhAn(n);
	cout << "So hang thu " << n << " la " << kq;
	return 1;
}
int TinhAn(int k)
{
	int P = 3, T = 7;
	int ahh;
	int at = -2;
	for (int i = 2; i <= k; i++)
	{
		P = P * 3;
		T = T * 7;
		ahh = 5 * at + 2 * P - 6 * T + 12;
		at = ahh;
	}
	return ahh;
}