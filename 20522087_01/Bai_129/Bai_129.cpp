#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a > b)
	{
		float temp1 = a;
		a = b;
		b = temp1;
	}
	if (a > c)
	{
		float temp2 = b;
		b = c;
		c = temp2;
	}
	if (b > c)
	{
		float temp3 = b;
		b = c;
		c = temp3;
	}
	cout << "Xep theo thu tu tang dan: " << a << " " << b << " " << c;
	return 1;
}