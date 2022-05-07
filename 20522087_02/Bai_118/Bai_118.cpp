#include<iostream>
#include<cmath>
using namespace std;
float TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = TinhAn(n);
	cout << "So hang thu " << n << " la " << kq;
	return 1;
}
float TinhAn(int k)
{
	float ahh{};
	float at = 2;
	for (int i = 2; i <= k; i++)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		at = ahh;
	}
	return ahh;
}