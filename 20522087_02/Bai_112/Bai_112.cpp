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
	float S = 4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6, e = 1, T = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 1)
	{
		T = T * 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / T;
		S = S + e;
	}
	return S;
}