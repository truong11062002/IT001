#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Hang so e la: " << kq;
	return 1;
}
float Tong()
{
	float S = 1, e = 1, M = 1;
	for (int i = 1; e >= pow(10, -6); i++)
	{
		M = M * i;
		e = (float)1 / M;
		S = S + e;
	}
	return S;
}