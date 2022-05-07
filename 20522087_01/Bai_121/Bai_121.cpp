#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, ahh;
	cout << "Nhap n: ";
	cin >> n;
	int at = 1, i = 2, att = 1;
	while (i <= n)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
