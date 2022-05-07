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
	float S = 0;
	for (int i = k; i >= 1; i--)
		S = sqrt(i + S);
	return S;
}