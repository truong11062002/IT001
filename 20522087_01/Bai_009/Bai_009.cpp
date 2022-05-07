#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float S = (float)0.5 * r * r * sin(2 * 3.14 / n);
	cout << "Ket qua: " << S;
	return 1;
}