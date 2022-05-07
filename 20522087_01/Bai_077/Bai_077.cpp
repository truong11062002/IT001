#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	int S = 0, i = 1;
	while (i <= n)
	{
		S = S + pow(i, k);
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}