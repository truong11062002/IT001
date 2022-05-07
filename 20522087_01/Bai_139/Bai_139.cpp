#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, x;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
			cout << "VSN";
		else
			cout << "VN";
	}
	else
		x = -b / a;
	cout << "Nghiem la: " << x;
	return 1;
}