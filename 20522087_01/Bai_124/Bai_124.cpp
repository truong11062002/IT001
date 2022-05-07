#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n, ahh, bhh;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, i = 2, bt = 1;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh << " " << bhh;
	return 0;
}
