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
	float S = 0, e = 1, M = 0;
	for (int i = 1; e >= pow(10, -6); i++)
	{
		M = M + i;
		e = (float)1 / M;
		S = S + e;
	}
	return S;
}