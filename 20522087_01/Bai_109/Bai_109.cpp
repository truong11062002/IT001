#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = 1;
	int e = 1, i = 1, M = 1;
	float T = 1;
	while (e >= pow(10, -6))
	{
		M = M * i;
		e = (float)1 / M;
		S = S + e;
		i++;
	}
	cout << "Ket qua e la: " << S;
	return 0;
}