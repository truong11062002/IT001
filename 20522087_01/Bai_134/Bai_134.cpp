#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if ((x <= y) && (y <= z))
		cout << "BDT dung";
	else
		cout << "BDT khong dung";
	return 1;
}