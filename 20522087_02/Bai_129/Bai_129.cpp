#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&);
void XuatTang(float, float, float);
int main()
{
	float a, b, c;
	Nhap(a, b, c);
	XuatTang(a, b, c);
	return 1;
}
void Nhap(float& a, float& b, float& c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
void XuatTang(float x, float y, float z)
{
	if (x > y)
	{
		float temp1 = x;
		x = y;
		y = temp1;
	}
	if (x > z)
	{
		float temp2 = x;
		x = z;
		z = temp2;
	}
	if (y > z)
	{
		float temp3 = y;
		y = z;
		z = temp3;
	}
	cout << "Xep theo thu tu tang dan: " << x << " " << y << " " << z;
}
