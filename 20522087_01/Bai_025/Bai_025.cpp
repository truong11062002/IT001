#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "Hoan vi hai so a va b: " << a << " " << b;
	return 0;
}