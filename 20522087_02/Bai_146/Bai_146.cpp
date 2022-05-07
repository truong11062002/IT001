#include<iostream>
#include<cmath>
using namespace std;
int ktDoiXung(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktDoiXung(n);
	if (kq == 1)
		cout << "La doi xung";
	if (kq == 2)
		cout << "Khong la doi xung";
	return 1;
}
int ktDoiXung(int k)
{
	int dn = 0;
	for (int t = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return 1;
	else
		return 2;
}
