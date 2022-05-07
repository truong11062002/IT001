#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, int&);
float Tong(float, int);
int main()
{
	float x;
	int n;
	Nhap(x, n);
	float kq = Tong(x, n);
	cout << "Tong la: " << kq;
	return 1;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Tong(float y, int k)
{
	float S = y;
	for (int i = 1; i <= k; i = i + 1)
		S = S * (y + i);
	return S;
}