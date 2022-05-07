#include<iostream>
#include<cmath>
using namespace std;
void LietKe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	LietKe(n);
	return 1;
}
void LietKe(int k)
{
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			cout << i << " ";
}