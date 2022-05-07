#include<iostream>
#include<cmath>
using namespace std;
int ktNguyenTo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktNguyenTo(n);
	if (kq == 1)
		cout << "La nguyen to";
	if (kq == 2)
		cout << "Khong la nguyen to";
	return 1;
}
int ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	else
		return 2;
}
