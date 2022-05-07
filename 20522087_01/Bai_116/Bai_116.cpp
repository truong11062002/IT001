#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, i = 2, att = 1;
	int ahh;
	while (i <= n)
	{
		ahh = 4 * at + att;
		att = at;
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
