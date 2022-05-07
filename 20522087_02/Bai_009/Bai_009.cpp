#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r, int& n);
float DienTich(float, int);
int main()
{
	float r;
	int n;
	Nhap(r, n);
	float cd = DienTich(r, n);
	cout << "Dien tich da giac " << n << " canh la: " << cd;
	return 1;
}
void Nhap(float& r, int& n)
{
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
}
float DienTich(float r, int k)
{
	const float pi = 3.14;
	return (float)1 / 2 * k * r * r * sin(2 * pi / k);
}
