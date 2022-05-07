#include<iostream>
#include<cmath>
using namespace std;
int ktDang3k(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktDang3k(n);
	if (kq == 1)
		cout << "La dang 3k";
	if (kq == 2)
		cout << "Khong la dang 3k";
	return 1;
}
int ktDang3k(int k)
{
	int flag = 1;
	for (int t = abs(k); t > 1; t = t / 3)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 2;
}
