#include<iostream>
#include<cmath>
using namespace std;
void XuatTang(float, float);
int main()
{
	float a, b;
	cout << "Nhap lan luot a va b: \n";
	cin >> a >> b;
	XuatTang(a, b);
	return 1;
}
void XuatTang(float x, float y)
{
	if (x > y)
	{
		float temp = x;
		x = y;
		y = temp;
	}
	cout << "Hai so tang dan la: " << x << " " << y;
}
