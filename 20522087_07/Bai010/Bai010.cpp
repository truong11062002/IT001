#include<iostream>
using namespace std;
float LuyThua(float, int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = LuyThua(x, n);
	cout << "Luy Thua la: " << kq;
	return 1;
}
float LuyThua(float x, int n)
{
	if (n == 0)
		return 1;
	return LuyThua(x, n - 1) * x;
}
