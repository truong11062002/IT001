#include<iostream>
#include<cmath>
using namespace std;
float Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong la: " << kq;
	return 1;
}
float Tong(int k)
{
	float S = pow(2, 0.5);
	for (int i = 3; i <= k; i++)
	{
		S = pow(S + i, (float)1 / i);
	}
	return S;
}