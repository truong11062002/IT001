#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r);
float TheTich(float);
int main()
{
	float r;
	Nhap(r);
	float tt = TheTich(r);
	cout << "The tich = " << tt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float TheTich(float r)
{
	const float pi = 3.14;
	return (float)4 / 3 * pi * r * r * r;
}
