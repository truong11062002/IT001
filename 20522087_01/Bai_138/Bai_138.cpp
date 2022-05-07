#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Gia tri cua ham so la: ";
	if (x <= 1)
	{
		if (x >= 0)
		{
			y = 5 * x - 7;
			cout << y;
		}
		else
		{
			y = -2 * x * x * x + 6 * x + 9;
			cout << y;
		}
	}
	else
	{
		y = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		cout << y;
	}
	return 1;
}