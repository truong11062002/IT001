#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, dv;
	cout << "Nhap n: ";
	cin >> n;
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "so dao nguoc cua n: " << dn;
	return 0;
}