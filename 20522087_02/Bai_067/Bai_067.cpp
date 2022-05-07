#include<iostream>
#include<cmath>
using namespace std;
int ktTonTaiLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktTonTaiLe(n);
	cout << "Kiem tra ton tai le la: " << kq;
	return 1;
}
int ktTonTaiLe(int k)
{
	k = abs(k);
	int flag = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			flag = 1;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}