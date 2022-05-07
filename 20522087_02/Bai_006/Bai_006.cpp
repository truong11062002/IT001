#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& C);
float ChuyenDoi(float);
int main()
{
	float C;
	Nhap(C);
	float cd = ChuyenDoi(C);
	cout << "Chuyen doi do C sang do F: " << cd;
	return 1;
}
void Nhap(float& C)
{
	cout << "Nhap C: ";
	cin >> C;
}
float ChuyenDoi(float C)
{
	return (float)9 / 5 * C + 32;
}
