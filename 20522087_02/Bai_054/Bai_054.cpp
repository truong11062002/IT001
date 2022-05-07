#include <iostream>
#include <cmath>
using namespace std;
int TongUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TongUocChan(n);
	cout << "Tong Uoc Chan la: " << kq;
	return 1;
}

int TongUocChan(int k)
{
	int S = 0;
	for (int i = 2; i <= k; i = i + 2)
		if (k % i == 0)
			S = S + i;
	return S;
}
