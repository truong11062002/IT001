#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		i++;
	}
	cout << "Tich la: " << T;
	return 0;
}