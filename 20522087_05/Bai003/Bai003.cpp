#include<iostream>
using namespace std;
struct duongthang
{
	float xa;
	float ya;
	float xb;
	float yb;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int main()
{
	DUONGTHANG M;
	Nhap(M);
	cout << "Toa do duong thang vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(DUONGTHANG& P)
{
	cout << "Nhap xa: ";
	cin >> P.xa;
	cout << "Nhap ya: ";
	cin >> P.ya;
	cout << "Nhap xb: ";
	cin >> P. xb;
	cout << "Nhap yb: ";
	cin >> P.yb;
}
void Xuat(DUONGTHANG P)
{
	cout << "\nxa = " << P.xa;
	cout << "\nya = " << P.ya;
	cout << "\nxb = " << P.xb;
	cout << "\nyb = " << P.yb;
}

