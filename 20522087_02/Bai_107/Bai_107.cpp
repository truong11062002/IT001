#include<iostream>
#include<cmath>
using namespace std;
float Tong(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = Tong(x);
	cout << "Cos(x): " << kq;
	return 1;
}
float Tong(float m)
{
	float S = 1, e = 1, M = 1, T = 1, dau = -1;
	for (int i = 1; e >= pow(10, -6); i++)
	{
		T = T * m * m;
		M = M * (2 * i - 1) * 2 * i;
		e = (float)T / M;
		S = S + dau * e;
		dau = -dau;
	}
	return S;
}