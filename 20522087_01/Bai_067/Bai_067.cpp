#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	n = abs(n);
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "TT";
	else
		cout << "Khong TT";
	return 0;
}