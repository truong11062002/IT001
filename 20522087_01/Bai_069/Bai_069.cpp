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
	int S = 0, T = 1, i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}