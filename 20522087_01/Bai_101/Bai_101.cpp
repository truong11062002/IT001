#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float S = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		S = S + e;
		i++;
	}
	cout << S;
	return 1;
}