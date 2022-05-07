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
	cout << "pow(e,x): " << kq;
	return 1;
}
float Tong(float m)
{
	float S = 1, e = 1, M = 1, T = 1;
	for (int i = 1; e >= pow(10, -6); i++)
	{
		T = T * m;
		M = M * i;
		e = (float)T / M;
		S = S + e;
	}
	return S;
}