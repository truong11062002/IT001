#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			S = S + i;
		i++;
	}
	cout << "Tong cac uoc nho hon n la: " << S;
	return 0;
}