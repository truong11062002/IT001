#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1, M = 1;
	float S = 1 + x;
	float T = x;
	while (i <= n)
	{
		M = M * (2 * i + 1) * 2 * i;
		T = T * x * x;
		S = S + (float)T / M;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}