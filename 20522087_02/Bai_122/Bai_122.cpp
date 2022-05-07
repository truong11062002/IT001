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
	int i = 2;
	int ahh = 0, bhh = 0;
	int at = 1, bt = 1;
	while (i <= k)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
long TinhBn(int k)
{
	int i = 2;
	int ahh = 0, bhh = 0;
	int at = 1, bt = 1;
	while (i <= k)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}

