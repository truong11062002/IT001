#include<iostream>
#include<cmath>
using namespace std;
int ktDang5k(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktDang5k(n);
	if (kq == 1)
		cout << "La dang 5k";
	if (kq == 2)
		cout << "Khong la dang 5k";
	return 1;
}
int ktDang5k(int k)
{
	int flag = 1;
	for (int t = abs(k); t > 1; t = t / 5)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 2;
}
