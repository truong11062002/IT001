#include<iostream>
using namespace std;
int GiaiThua(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = GiaiThua(n);
	cout << "Giai thua la: " << kq;
	return 1;
}
int GiaiThua(int n)
{
	if (n == 1)
		return 1;
	return GiaiThua(n - 1) * n;
}
