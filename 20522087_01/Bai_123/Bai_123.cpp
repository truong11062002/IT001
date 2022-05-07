#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, ahh, bhh;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, i = 2, bt = 1;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh << " " << bhh;
	return 0;
}
