#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 0, i = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "La so CP";
	else
		cout << "Khong la so CP";
	return 0;
}