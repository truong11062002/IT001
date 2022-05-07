#include <iostream>
#include <cmath>
using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tich(n);
	cout << "Tich la: " << kq;
	return 1;
}

float Tich(int k)
{
	float T = 1;
	for (int i = 1; i <= k; i = i + 1)
		T = T * (1 + (float)1 / i / i);
	return T;
}
