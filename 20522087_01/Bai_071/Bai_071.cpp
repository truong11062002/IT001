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
	float S = x;
	float T = x;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + T;
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}