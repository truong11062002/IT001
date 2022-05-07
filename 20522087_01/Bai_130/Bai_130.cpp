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
	x = abs(x);
	y = abs(y);
	z = abs(z);
	if (x < y + z && y < z + x && z < x + y)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	return 1;
}