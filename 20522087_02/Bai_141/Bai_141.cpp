#include<iostream>
#include<cmath>
using namespace std;
int csdt(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = csdt(n);
	cout << "Chu so dau tien cua n la: " << kq;
	return 1;
}
int csdt(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
