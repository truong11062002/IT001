#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r, int& n);
float ChuVi(float, int);
int main()
{
	float r;
	int n;
	Nhap(r, n);
	float cd = ChuVi(r, n);
	cout << "Chu vi da giac " << n << " canh la: " << cd;
	return 1;
}
void Nhap(float& r, int& n)
{
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
}
float ChuVi(float r, int k)
{
	const float pi = 3.14;
	return (float)2 * k * r * sin(pi / k);
}
