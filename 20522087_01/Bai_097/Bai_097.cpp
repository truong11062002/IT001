#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = 0;
	int i = 1, T = 1;
	while (i <= n)
	{
		T = T * x;
		S = (float)sqrt(T + S);
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}