#include <iostream>
#include <cmath>
using namespace std;
int TongUocNho(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TongUocNho(n);
	cout << "Tong uoc nho hon n la: " << kq;
	return 1;
}

int TongUocNho(int k)
{
	int S = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			S = S + i;
	return S;
}
