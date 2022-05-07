#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float pi = 3;
	int i = 2, dau = 1, e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i / (i + 1) / (i + 2);
		pi = pi + dau * e;
		dau = -dau;
		i++;
	}
	cout << "Ket qua pi: " << pi;
	return 0;
}