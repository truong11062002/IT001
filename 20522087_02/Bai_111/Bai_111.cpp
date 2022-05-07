#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Hang so pi la: " << kq;
	return 1;
}
float Tong()
{
	float S = 3, e = 1, dau = 1;
	for (int i = 2; e >= pow(10, -6); i = i + 1)
	{
		e = (float)4 / i / (i + 1) / (i + 2);
		S = S + dau * e;
		dau = -dau;
	}
	return S;
}