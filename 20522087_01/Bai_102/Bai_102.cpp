#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 1;
	float S = 0;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / 2 * i;
		S = S + e;
		i++;
	}
	cout << "Ket qua: " << S;
	return 0;
}