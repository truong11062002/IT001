#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "S(n): " << kq;
	return 1;
}
float Tong()
{
	float S = 0, e = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 2)
	{
		e = (float)1 / i;
		S = S + e;
	}
	return S;
}