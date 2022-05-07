#include<iostream>
#include<cmath>
using namespace std;
float Tong(int, float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = Tong(n, x);
	cout << "Tong la: " << kq;
	return 1;
}
float Tong(int k, float y)
{
	float S = 0, T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * y;
		S = sqrt(S + T);
	}
	return S;
}