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
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}
