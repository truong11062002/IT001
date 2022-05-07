#include<iostream>
#include<cmath>
using namespace std;
int ktNhuan(int);
int main()
{
	int n;
	cout << "Nhap nam: ";
	cin >> n;
	int kq = ktNhuan(n);
	if (kq == 1)
		cout << "La nam nhuan";
	if (kq == 2)
		cout << "Khong la nam nhuan";
	return 1;
}
int ktNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	else
		return 2;
}