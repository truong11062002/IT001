#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "Xep theo thu tu tang dan la: " << a << "  " << b;
	return 0;
}