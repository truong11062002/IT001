#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r);
float DienTichXungQuanh(float);
int main()
{
	float r;
	Nhap(r);
	float dt = DienTichXungQuanh(r);
	cout << "Dien tich xung quanh = " << dt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float DienTichXungQuanh(float r)
{
	const float pi = 3.14;
	return 4 * pi * r * r;
}
