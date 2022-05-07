#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON M;
	Nhap(M);
	cout << "Duong tron vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}