#include<iostream>
using namespace std;
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
int main()
{
	HINHCAU M;
	Nhap(M);
	cout << "Hinh cau vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(HINHCAU c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}
