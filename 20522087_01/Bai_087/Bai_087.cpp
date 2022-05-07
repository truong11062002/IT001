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
	float S = x;
	float T = x;
	int i = 1, dau = -1;
	while (i <= n)
	{
		T = T * x * x;
		S = (float)S + (float)dau * T;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << S;
	return 0;
}