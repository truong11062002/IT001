#include<iostream>
#include<cmath>
using namespace std;
void LietKeUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Uoc so le la: ";
	LietKeUocSo(n);
	return 1;
}
void LietKeUocSo(int k)
{
	for (int i = 1; i <= k; i = i + 2)
		if (k % i == 0)
			cout << i << " ";
}