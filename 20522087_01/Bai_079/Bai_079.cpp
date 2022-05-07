#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0, T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = S + T * i;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}