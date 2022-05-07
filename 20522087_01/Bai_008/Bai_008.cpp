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
	float pi = 3.14;
	float P = 2 * n * r * sin(pi / n);
	cout << "Chu vi la: " << P;
	return 1;
}