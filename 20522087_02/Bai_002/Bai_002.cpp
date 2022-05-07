#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r);
float DienTich(float);
int main()
{
	float r;
	Nhap(r);
	float dt = DienTich(r);
	cout << "Dien tich = " << dt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float DienTich(float r)
{
	const float pi = 3.14;
	return pi * r * r;
}
