#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Hoan vi a va b: " << a << " " << b;
	return 0;
}