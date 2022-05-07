#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, int&);
float LuyThua(float, int);
int main()
{
	float x;
	int n;
	Nhap(x, n);
	float kq = LuyThua(x, n);
	cout << "X mu n la : " << kq;
	return 1;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float LuyThua(float y, int k)
{
	float T = 1;
	for (int i = 1; i <= k; i++)
		T = T * y;
	return T;
}