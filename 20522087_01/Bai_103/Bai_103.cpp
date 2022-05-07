#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 3;
	float S = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		S = S + e;
		i = i + 2;
	}
	cout << "Ket qua: " << S;
	return 0;
}