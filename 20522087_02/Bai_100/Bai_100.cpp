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
	float S = 0, T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = pow(S + T, (float)1 / (i + 1));
	}
	return S;
}