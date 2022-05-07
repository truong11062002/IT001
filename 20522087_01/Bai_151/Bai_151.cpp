#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, du;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "La dang 2^m";
	else
		cout << "Khong la dang 2^m";
	return 0;
}