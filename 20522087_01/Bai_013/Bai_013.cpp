#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x7 = x6 * x;
	cout << "Ket qua: " << x7;
	return 1;
}