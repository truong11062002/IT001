#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + i * i * i;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}