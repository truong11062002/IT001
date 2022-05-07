#include<iostream>
#include<cmath>
using namespace std;
int ktChinhPhuong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktChinhPhuong(n);
	if (kq == 1)
		cout << "La chinh phuong";
	if (kq == 2)
		cout << "Khong la chinh phuong";
	return 1;
}
int ktChinhPhuong(int k)
{
	int flag = 0;
	for (int i = 1; i < k; i++)
		if (i * i == k)
			flag = 1;
	if (flag == 1)
		return 1;
	else
		return 2;
}
