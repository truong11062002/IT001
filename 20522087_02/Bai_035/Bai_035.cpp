#include <iostream>
#include <cmath>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tich(n);
	cout << "Ket qua: " << kq;
	return 1;
}

int Tich(int k)
{
	float T = 1;
	for (int i = 1; i <= k; i = i + 1)
		T = T * i;
	return T;
}
