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
	if (a >= 5)
		fx = 2 * a * a + 5 * a + 9;
	else
		fx = -2 * a * a + 4 * a - 9;
	return fx;
}