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
	float S = 0, T = 1;
	int M = 1, i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + (float)T / M;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}