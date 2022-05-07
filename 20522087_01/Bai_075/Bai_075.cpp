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
	float S = 1, T = 1;
	int M = 1, i = 2;
	while (i <= 2 * n)
	{
		M = M * i * (i - 1);
		T = T * x * x;
		S = S + (float)T / M;
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}