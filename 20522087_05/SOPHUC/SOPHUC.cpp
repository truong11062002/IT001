#include<iostream>
using namespace std;
struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
// Bai 120
SOPHUC Tong(SOPHUC, SOPHUC);
// Bai 121
SOPHUC Hieu(SOPHUC, SOPHUC);
// Bai 122
SOPHUC Tich(SOPHUC, SOPHUC);
// Bai 123
SOPHUC Thuong(SOPHUC, SOPHUC);
// Bai 124
SOPHUC LuyThua(SOPHUC, int);
int main()
{
	SOPHUC A, B;
	cout << "Nhap so phuc A: ";
	Nhap(A);
	cout << "So phuc A vua nhap: ";
	Xuat(A);
	cout << "\nNhap so phuc B: ";
	Nhap(B);
	cout << "So phuc B vua nhap: ";
	Xuat(B);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 120 ---- > 124): ";
	cin >> baitap;
	while (baitap < 120 || baitap > 124)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 120 ---- > 124): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 120:
	{
		cout << "Tong hai so phuc ";
		Xuat(Tong(A, B));
	}break;
	case 121:
	{
		cout << "Hieu hai so phuc ";
		Xuat(Hieu(A, B));
	}break;
	case 122:
	{
		cout << "Tich hai so phuc ";
		Xuat(Tich(A, B));
	}break;
	case 123:
	{
		cout << "Thuong hai so phuc ";
		Xuat(Thuong(A, B));
	}break;
	case 124:
	{
		int n;
		cout << "Nhap luy thua bac n: ";
		cin >> n;
		cout << "Luy thua bac n cua so phuc A ";
		Xuat(LuyThua(A, n));
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "\nNhap Thuc: ";
	cin >> x.Thuc;
	cout << "\nNhap Ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}
SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}
SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}
SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}
SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	float mc = y.Thuc * y.Thuc + y.Ao * y.Ao;
	SOPHUC temp;
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}
SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC temp = { 1,0 };
	for (int i = 1; i <= n; i++)
		temp = Tich(temp, x);
	return temp;
}
