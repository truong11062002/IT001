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
	int att = 1;
	int ahh;
	int at = 2;
	for (int i = 2; i <= k; i++)
	{
		ahh = 4 * at + att;
		att = at;
		at = ahh;
	}
	return ahh;
}