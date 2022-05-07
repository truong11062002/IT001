#include<iostream>
#include<cmath>
using namespace std;
int ktHoanThien(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktHoanThien(n);
	if (kq == 1)
		cout << "La hoan thien";
	if (kq == 2)
		cout << "Khong hoan thien";
	return 1;
}
int ktHoanThien(int k)
{
	int S = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			S = S + i;
	if (S == k)
		return 1;
	else
		return 2;
}
