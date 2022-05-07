#include<iostream>
#include<cmath>
using namespace std;
int TichUocLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TichUocLe(n);
	cout << "Tich uoc so le la: " << kq;
	return 1;
}
int TichUocLe(int k)
{
	int T = 1;
	for (int i = 1; i <= k; i = i + 2)
		if (k % i == 0)
			T = T * i;
	return T;
}