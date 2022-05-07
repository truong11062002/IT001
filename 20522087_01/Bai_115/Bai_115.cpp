#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 3, i = 2, att = -1;
	int ahh;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
