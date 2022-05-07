#include<iostream>
#include<cmath>
using namespace std;
float BienDoi(float&);
int main()
{
	float a, b;
	cout << "Nhap a va b: \n";
	cin >> a >> b;
	float kq1 = BienDoi(a);
	float kq2 = BienDoi(b);
	cout << "Tri tuyet doi cua a va b la: " << kq1 << " " << kq2;
	return 1;
}
float BienDoi(float& k)
{
	if (k < 0)
		k = abs(k);
	return k;
}