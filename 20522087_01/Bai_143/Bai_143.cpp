#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = 0, i = 1;
	while (i < n)
	{
		if (n % i == 0)
			S = S + i;
		i++;
	}
	if (S == n)
		cout << "HT";
	else
		cout << "Khong hoan thien";
	return 0;
}