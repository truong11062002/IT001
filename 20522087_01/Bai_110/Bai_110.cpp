#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float pi = 4;
	int i = 3, dau = -1, e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		pi = pi + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Ket qua pi: " << pi;
	return 0;
}