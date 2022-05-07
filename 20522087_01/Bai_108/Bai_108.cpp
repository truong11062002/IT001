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
		M = M * i;
		T = T * x;
		e = (float)T / M;
		S = S + e;
		i++;
	}
	cout << "Ket qua e mu x la: " << S;
	return 0;
}