#include<iostream>
#include<cmath>
using namespace std;
bool ktNhuan(int);
void LietKe(int, int);
int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	LietKe(x, y);
	return 1;
}
bool ktNhuan(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		return true;
	else
		return false;
}
void LietKe(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		if ((ktNhuan(i)) == true)
			cout << i << " ";
	}
}

