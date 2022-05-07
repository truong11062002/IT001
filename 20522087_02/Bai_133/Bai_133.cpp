#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&);
int DinhDang(float, float, float);
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	int kq = DinhDang(x, y, z);
	switch (kq)
	{
	case 1: {
		cout << "Tam giac deu";
	}break;
	case 2: {
		cout << "Tam giac vuong can";
	}break;
	case 3: {
		cout << "Tam giac vuong";
	}break;
	case 4: {
		cout << "Tam giac can";
	}break;
	case 5: {
		cout << "Tam giac thuong";
	}break;
	case 6: {
		cout << "Khong phai tam giac";
	}break;
	}
}
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
int DinhDang(float x, float y, float z)
{
	if (x < y + z && y < z + x && z < x + y)
	{
		if (x == y && y == z && x == z)
			return 1;
		else
			if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
				if (x == y || y == z || x == z)
					return 2;
				else
					return 3;
			else
				if (x == y || y == z || x == z)
					return 4;
				else
					return 5;
	}
	else
		return 6;
}