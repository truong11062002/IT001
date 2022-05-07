#include<iostream>
#include<cmath>
using namespace std;
int UocSoChan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = UocSoChan(n);
	cout << "So luong uoc so chan la: " << kq;
	return 1;
}
int UocSoChan(int k)
{
	int dem = 0;
	for (int i = 2; i <= k; i = i + 2)
		if (k % i == 0)
			dem++;
	return dem;
}