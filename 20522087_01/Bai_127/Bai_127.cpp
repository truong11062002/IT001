#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int lc = a;
	if (lc > b)
		lc = b;
	cout << "GTNN la: " << lc;
	return 0;
}