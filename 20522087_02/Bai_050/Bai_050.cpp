#include<iostream>
#include<cmath>
using namespace std;
int Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tong(n);
	cout << "Tong uoc so la: " << kq;
	return 1;
}
int Tong(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			s = s + i;
	return s;
}