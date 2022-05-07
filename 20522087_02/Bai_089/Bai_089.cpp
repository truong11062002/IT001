#include<iostream>
#include<cmath>
using namespace std;
float Tong(int, float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = Tong(n, x);
	cout << "Tong la: " << kq;
	return 1;
}
float Tong(int k, float m)
{
	float S = 0, T = 1, dau = -1, M = 0;
	for (int i = 1; i <= k; i = i + 1)
	{
		M = M + i;
		T = T * m;
		S = S + (float)dau * T / M;
		dau = -dau;
	}
	return S;
}