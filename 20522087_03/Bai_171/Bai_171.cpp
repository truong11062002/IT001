#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void NhapGiam(float [], int&);
int main()
{
	float b[100];
	int k;
	NhapGiam(b, k);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 1;
}
void NhapGiam(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		float x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}