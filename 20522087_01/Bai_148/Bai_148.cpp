#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, dv;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int t = abs(n);
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 1)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan chan";
	else
		cout << "Khong toan chan";
	return 0;
}