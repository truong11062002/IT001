#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = S + (float)1 / i;
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}