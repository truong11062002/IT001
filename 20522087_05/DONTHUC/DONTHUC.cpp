#include<iostream>
using namespace std;
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
// Bai 137
DONTHUC Tich(DONTHUC, DONTHUC);
// Bai 138
DONTHUC Thuong(DONTHUC, DONTHUC);
// Bai 139
DONTHUC DaoHam(DONTHUC);
// Bai 140
DONTHUC DaoHamCapk(DONTHUC, int);
// Bai 141
float TinhGiaTri(DONTHUC, float);
// Bai 142
DONTHUC operator*(DONTHUC, DONTHUC);
// Bai 143
DONTHUC operator/(DONTHUC, DONTHUC);
int main()
{
	DONTHUC F,G;
	cout << "Nhap don thuc F ";
	Nhap(F);
	cout << "Don thuc F vua nhap: ";
	Xuat(F);
	cout << "\nNhap don thuc G ";
	Nhap(G);
	cout << "Don thuc G vua nhap: ";
	Xuat(G);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 137 ---- > 143): ";
	cin >> baitap;
	while (baitap < 137 || baitap > 143)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 137 ---- > 143): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 137:
	{
		cout << "Tich hai don thuc f va g \n";
		Xuat(Tich(F, G));
	}break;
	case 138:
	{
		cout << "Thuong hai don thuc f va g \n";
		Xuat(Thuong(F, G));
	}break;
	case 139:
	{
		cout << "Dao ham cua don thuc f ";
		Xuat(DaoHam(F));
	}break;
	case 140:
	{
		int k;
		cout << "Nhap dao ham cap k cua f: ";
		cin >> k;
		cout << "Dao ham cap k cua f la: ";
		Xuat(DaoHamCapk(F,k));
	}break;
	case 141:
	{
		float x;
		cout << "Nhap gia tri x: ";
		cin >> x;
		float kq = TinhGiaTri(F, x);
		cout << "Gia tri f tai " << x << " la: " << kq;
	}break;
	case 142:
	{
		cout << "Dinh nghia toan tu tich: ";
		Xuat(operator*(F,G));
	}break;
	case 143:
	{
		cout << "Dinh nghia toan tu thuong: ";
		Xuat(operator/(F, G));
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "\nNhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << "\nHe so = " << f.a;
	cout << "\nSo mu = " << f.n;
}
DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}
DONTHUC Thuong(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}
DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n -1 ;
	return temp;
}
DONTHUC DaoHamCapk(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}
float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
		T = T * x;
	T = T * f.a;
	return T;
}
DONTHUC operator*(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}
DONTHUC operator/(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}


