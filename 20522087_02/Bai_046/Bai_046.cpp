#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong la: " << kq;
	return 1;
}

float Tong(int k)
{
	float S = 0;
	for (int i = 1; i <= k; i = i + 1)
		S = S + (float)1 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
	return S;
}
