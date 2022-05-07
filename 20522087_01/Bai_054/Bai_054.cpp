#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			S = S + i;
		i = i + 2;
	}
	cout << "Tong cac uoc chan cua n la: " << S;
	return 0;
}