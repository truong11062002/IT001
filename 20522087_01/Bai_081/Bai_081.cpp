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
	float S = 1 / x;
	float M = x;
	int i = 1;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + (float)1 / M;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}