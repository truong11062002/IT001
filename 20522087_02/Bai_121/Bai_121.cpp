#include<iostream>
#include<cmath>
using namespace std;
int TinhFibo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TinhFibo(n);
	cout << "So hang thu " << n << " cua day Fibo la " << kq;
	return 1;
}
int TinhFibo(int k)
{
	int att = 1, at = 1;
	int ahh{};
	for (int i = 2; i <= k; i++)
	{
		ahh = at + att;
		att = at;
		at = ahh;
	}
	return ahh;
}