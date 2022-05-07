#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&);
int GiaiPhuongTrinh(float, float, float, float&, float&);
int main()
{
	float a, b, c, x1, x2;
	Nhap(a, b, c);
	int number = GiaiPhuongTrinh(a, b, c, x1, x2);
	switch (number)
	{
	case 1: {
		cout << "Phuong trinh co 2 nghiem x1 va x2: \n";
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	}break;
	case 2: {
		cout << "Phuong trinh vo nghiem ";
	}break;
	case 3: {
		cout << "Phuong trinh co moi nghiem la " << x1;
	}break;
	}
}
void Nhap(float& a, float& b, float& c)
{
	cout << "Nhap a:(a!=0) ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
int GiaiPhuongTrinh(float a, float b, float c, float& x1, float& x2)
{
	float D = b * b - 4 * a * c;
	if (D != 0)
	{
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / 2 / a;
			x2 = (-b - sqrt(D)) / 2 / a;
			return 1;
		}
		else if (D < 0)
		{
			x1 = x2 = 0.0;
			return 2;
		}
	}
	else
	{
		x1 = x2 = -b / 2 / a;
		return 3;
	}
}