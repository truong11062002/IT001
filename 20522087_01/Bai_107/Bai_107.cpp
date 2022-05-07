#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = 1;
	int e = 1, i = 1, M = 1;
	float T = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * (2 * i - 1) * 2 * i;
		e = (float)T / M;
		S = S + dau * e;
		dau = -dau;
		i++;
	}
	cout << "Ket qua cos(x) la: " << S;
	return 0;
}