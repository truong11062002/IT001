#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& F);
float ChuyenDoi(float);
int main()
{
	float F;
	Nhap(F);
	float cd = ChuyenDoi(F);
	cout << "Chuyen doi do F sang do C: " << cd;
	return 1;
}
void Nhap(float& F)
{
	cout << "Nhap F: ";
	cin >> F;
}
float ChuyenDoi(float F)
{
	return (float)5 / 9 * F - 32;
}
