#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int c = (n / 10) % 10;
	cout << "Chu so hang chuc la: " << c;
	return 0;
}