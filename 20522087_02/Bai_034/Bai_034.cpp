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
	cout << "Ket qua: " << kq;
	return 1;
}

float Tong(int k)
{
	float S = 0;
	for (int i = 1; i <= 2 * k + 1; i = i + 2)
		S = S + (float)i / (i + 1);
	return S;
}
