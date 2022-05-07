#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0;
	int M = 0, i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + (float)1 / M;
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}