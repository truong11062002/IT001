#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
int Tram(int);
int main()
{
	int n;
	Nhap(n);
	int kq = Tram(n);
	cout << "Chu so hang tram la: " << kq;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int Tram(int n)
{
	int c = (n / 100) % 10;
	return c;
}