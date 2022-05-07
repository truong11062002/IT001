#include<iostream>
#include<cmath>
using namespace std;
int ktDang2k(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktDang2k(n);
	if (kq == 1)
		cout << "La dang 2k";
	if (kq == 2)
		cout << "Khong la dang 2k";
	return 1;
}
int ktDang2k(int k)
{
	int flag = 1;
	for (int t = abs(k); t > 1; t = t / 2)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 2;
}
