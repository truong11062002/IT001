#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, dv;
	cout << "Nhap n: ";
	cin >> n;
	int dn = 0;
	int t = abs(n);
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		cout << "Doi xung";
	else
		cout << "Khong doi xung";
	return 0;
}