#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&);
float GiaiPhuongTrinh(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	float kq = GiaiPhuongTrinh(a, b);
	cout << "Nghiem cua phuong trinh ax+b: " << kq;
	return 1;
}
void Nhap(float& a, float& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
float GiaiPhuongTrinh(float m, float n)
{
	float x{};
	if (m == 0)
		if (n == 0)
			cout << "VSN";
		else
			cout << "VN";
	else
		x = -n / m;
	return x;
}
