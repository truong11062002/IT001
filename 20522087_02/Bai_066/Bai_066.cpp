#include<iostream>
#include<cmath>
using namespace std;
int ktTonTaiChan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktTonTaiChan(n);
	cout << "Kiem tra ton tai chan la: " << kq;
	return 1;
}
int ktTonTaiChan(int k)
{
	k = abs(k);
	int flag = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}