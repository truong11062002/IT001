#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			T = T * i;
		i++;
	}
	cout << "Tich cac uoc cua n la: " << T;
	return 0;
}