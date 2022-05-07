#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&, int&);
void HoanVi(int, int);
int main()
{
	int a, b;
	Nhap(a, b);
	HoanVi(a, b);
	return 1;
}
void Nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
void HoanVi(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Hoan vi a va b: " << a << " " << b;
}
