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
	float S = 0;
	float T = x;
	int i = 1;
	while (i <= n)
	{
		T = sin(T);
		S = S + (float)T;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}