#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&);
float LuyThua(float);
int main()
{
	float x;
	Nhap(x);
	float kq = LuyThua(x);
	cout << "Ket qua la: " << kq;
	return 1;
}
void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float LuyThua(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x13 = x8 * x4 * x2 / x;
	return x13;
}