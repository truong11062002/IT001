#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
