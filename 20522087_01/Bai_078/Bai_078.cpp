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
	float S = 1, T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + (float)T;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}