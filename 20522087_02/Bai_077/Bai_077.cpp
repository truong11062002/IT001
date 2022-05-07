#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&, float&);
int Tong(int, float);
int main()
{
	int n;
	float k;
	Nhap(n, k);
	float kq = Tong(n, k);
	cout << "Tong la: " << kq;
	return 1;
}
void Nhap(int& n, float& k)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
}
int Tong(int k, float y)
{
	float S = 0;
	for (int i = 1; i <= k; i++)
		S = S + pow(i, y);
	return S;
}