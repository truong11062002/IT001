#include<iostream>
#include<cmath>
using namespace std;
int Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tong(n);
	cout << "Tong la: " << kq;
	return 1;
}
int Tong(int k)
{
	int S = 0, T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = S + T;
	}
	return S;
}