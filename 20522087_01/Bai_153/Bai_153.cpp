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
		du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		cout << "La dang 5^m";
	else
		cout << "Khong la dang 5^m";
	return 0;
}