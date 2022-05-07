#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	int i = x;
	while (i <= y)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			cout << i << " ";
		i++;
	}
	return 1;
}