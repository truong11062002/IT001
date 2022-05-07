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
	{
		if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
			cout << "La tam giac vuong";
		else
		{
			if (x == y || y == z || x == z)
			{
				if (x = y = z)
					cout << "Tam giac deu";
				else
					cout << "Tam giac can";
				if (x != y != z)
					cout << "Tam giac thuong";
				else
					cout << "Tam giac can";
			}
		}
	}
	else
		cout << "Khong phai tam giac";
	return 1;
}