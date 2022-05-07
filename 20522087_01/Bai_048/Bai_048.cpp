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
	float T = x;
	int i = 1;
	while (i <= n)
	{
		T = T * (float)(x + i);
		i++;
	}
	cout << "Tich (x,n) la: " << T;
	return 0;
}