#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	float ahh;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2, i = 2;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
