#include<iostream>
#include<cmath>
using namespace std;
int ktToanLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktToanLe(n);
	if (kq == 1)
		cout << "Toan le";
	if (kq == 2)
		cout << "Khong toan le";
	return 1;
}
int ktToanLe(int k)
{
	int flag = 1;
	for (int t = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 2;
}
