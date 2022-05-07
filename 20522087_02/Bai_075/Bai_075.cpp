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
	float S = 1, T = 1, M = 1;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		M = M * (i - 1) * i;
		T = T * m * m;
		S = S + (float)T / M;
	}
	return S;
}