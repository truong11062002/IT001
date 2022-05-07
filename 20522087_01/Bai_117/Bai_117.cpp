#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, ahh;
	cout << "Nhap n: ";
	cin >> n;
	int at = 3, i = 2, att = -1, T = 2;
	while (i <= n)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
