#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&);
int ktBatDangThuc(float, float, float);
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	int kq= ktBatDangThuc(x, y, z);
	if (kq == 1)
		cout << "BDT dung";
	if (kq == 2)
		cout << "BDT khong dung";
	return 1;
}
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
int ktBatDangThuc(float x, float y, float z)
{
	if (x <= y && y <= z)
		return 1;
	else
		return 2;
}