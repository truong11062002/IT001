#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float S = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	int i = 1, e = 1;
	float T = 1;
	while (e >= pow(10, -6))
	{
		T = T * 16;
		e = ((4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 8))) / T;
		S = S + (float)e;
	}
	cout << "Ket qua: " << S;
	return 0;
}