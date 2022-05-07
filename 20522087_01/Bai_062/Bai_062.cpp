#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			S = S + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so chan cua n: " << S;
	return 0;
}