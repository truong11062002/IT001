#include<iostream>
#include<cmath>
using namespace std;
long TinhAn(int);
long TinhBn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long kq1 = TinhAn(n);
	long kq2 = TinhBn(n);
	cout << "So hang thu " << n << " cua day la " << kq1 << " " << kq2;
	return 1;
}
long TinhAn(int k)
{
	int ahh{}, bhh{};
	int at = 2, bt = 1;
	for (int i = 2; i <= k; i++)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
long TinhBn(int k)
{
	int ahh{}, bhh{};
	int at = 2, bt = 1;
	for (int i = 2; i <= k; i++)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}

