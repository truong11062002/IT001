#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&);
int ktTonTai(float, float, float);
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	int kq = ktTonTai(x, y, z);
	if (kq == 1)
		cout << "Ton tai ";
	if (kq == 2)
		cout << "Khong ton tai";
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
int ktTonTai(float a, float b, float c)
{
	if (a < b + c && b < a + c && c < a + b)
		return 1;
	else
		return 2;
}
