#include<iostream>
#include<cmath>
using namespace std;
int DemUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = DemUocSo(n);
	cout << "So luong uoc so la: " << kq;
	return 1;
}
int DemUocSo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return dem;
}