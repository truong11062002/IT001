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
	float S = m, T = m;
	for (int i = 3; i <= 2 * k + 1; i = i + 2)
	{
		T = T * m * m;
		S = S + T;
	}
	return S;
}