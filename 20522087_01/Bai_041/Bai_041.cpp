#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0, i = 1;
	while (i <= n)
	{
		S = S + i * (i + 1) * (i + 2);
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}