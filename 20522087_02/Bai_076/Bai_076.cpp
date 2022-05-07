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
	float S = 1 + m, T = m, M = 1;
	for (int i = 1; i <= k; i = i + 1)
	{
		M = M * (2 * i + 1) * 2 * i;
		T = T * m * m;
		S = S + (float)T / M;
	}
	return S;
}