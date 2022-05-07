#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y;
	cout << "Nhap x: ";
	cin >> x;
	if (x > 5)
		y = 2 * x * x + 5 * x + 9;
	else
		y = -2 * x * x + 4 * x - 9;
	cout << "Gia tri cua ham so la: " << y;
	return 1;
}