#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	float D = b * b - 4 * a * c;
	if (D != 0)
	{
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			cout << "Hai nghiem x1 va x2 la: " << x1 << " " << x2;
		}
		else
			cout << "VN";
	}
	else
	{
		x1 = x2 = -b / 2 * a;
		cout << "Phuong trinh co mot nghiem la: " << x1;
	}
	return 1;
}