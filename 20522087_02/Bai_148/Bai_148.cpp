#include<iostream>
#include<cmath>
using namespace std;
int ktToanChan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktToanChan(n);
	if (kq == 1)
		cout << "Toan chan";
	if (kq == 2)
		cout << "Khong toan chan";
	return 1;
}
int ktToanChan(int k)
{
	int flag = 1;
	for (int t = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 2;
}
