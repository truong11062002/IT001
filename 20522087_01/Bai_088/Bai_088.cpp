#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0, M = 0;
	int i = 1, dau = 1;
	while (i <= n)
	{
		M = M + i;
		S = (float)S + (float)dau * 1 / M;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << S;
	return 0;
}