#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
int Chuc(int);
int main()
{
	int n;
	Nhap(n);
	int kq = Chuc(n);
	cout << "Chu so hang chuc la: " << kq;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int Chuc(int k)
{
	int c = (k / 10) % 10;
	return c;
}