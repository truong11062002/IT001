#include<iostream>
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
float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return  (s + n * n * n * n);
}