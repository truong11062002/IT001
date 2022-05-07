#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r);
float ChuVi(float);
int main()
{
	float r;
	Nhap(r);
	float dt = ChuVi(r);
	cout << "Chu vi = " << dt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float ChuVi(float r)
{
	const float pi = 3.14;
	return 2 * pi * r;
}
