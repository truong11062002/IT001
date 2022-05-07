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
	while (i <= n)
	{
		S = (float)sqrt(i + S);
		i++;
	}
	cout << "Tong la: " << S;
	return 0;
}