#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&);
float DienTich(float, float, float, float, float, float);
int main()
{
	float x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1, x2, y2, x3, y3);
	float kq = DienTich(x1, y1, x2, y2, x3, y3);
	cout << "Dien Tich la: " << kq;
	return 1;
}
void Nhap(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;
}
float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float P = (AB + BC + AC) / 2;
	float S = sqrt(P * (P - AB) * (P - BC) * (P - AC));
	return S;
}


