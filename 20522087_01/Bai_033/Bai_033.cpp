#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0.5;
	int i = 2;
	while (i <= n)
	{
		S = S + (float)i / (i + 1);
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}