#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 1, M = 0;
	float S = 0;
	float e = 1;
	while (e >= pow(10, -6))
	{
		M = M + i;
		e = (float)1 / M;
		S = S + e;
		i++;
	}
	cout << "Ket qua: " << S;
	return 0;
}