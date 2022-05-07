#include<iostream>
#include<cmath>
using namespace std;
float NhoNhat(float, float);
int main()
{
	float a, b;
	cout << "Nhap lan luot a va b: \n";
	cin >> a >> b;
	float kq = NhoNhat(a, b);
	cout << "Gia tri lon nhat la: " << kq;
	return 1;
}
float NhoNhat(float x, float y)
{
	float lc = x;
	if (lc > y)
		lc = y;
	return lc;
}
