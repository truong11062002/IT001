#include<iostream>
#include<cmath>
using namespace std;
float TinhGiaTri(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = TinhGiaTri(x);
	cout << "Gia tri cua ham so la: " << kq;
	return 1;
}
float TinhGiaTri(float a)
{
	float fx;
	if (a <= 1)
	{
		if (a >= 0)
		{
			fx = 5 * a - 7;
		}
		else
		{
			fx = -2 * a * a * a + 6 * a + 9;
		}
	}
	else
	{
		fx = 2 * a * a * a + 5 * a * a - 8 * a + 3;
	}
	return fx;
}