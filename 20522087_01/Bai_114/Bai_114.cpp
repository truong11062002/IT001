#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, i = 2, p = 3, T = 7;
	int ahh;
	while (i <= n)
	{
		p = p * 3;
		T = T * 7;
		ahh = 5 * at + 2 * p - 6 * T + 12;
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
