#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0;
	int i = 1;
	while (i <= 2 * n + 1)
	{
		S = S + (float)i / (i + 1);
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}