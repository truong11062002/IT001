#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = -1, T = 1, M = 1;
	int i = 1, dau = 1;
	while (i <= n)
	{
		M = M * (2 * i - 1) * 2 * i;
		T = T * x * x;
		S = (float)S + (float)dau * T / M;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << S;
	return 0;
}