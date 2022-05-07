#include<iostream>
using namespace std;
struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;
void Nhap(HONSO&);
void Xuat(HONSO);
// Bai 109
int UCLN(int, int);
void RutGon(HONSO&);
// Bai 110
HONSO Tong(HONSO, HONSO);
// Bai 111
HONSO Hieu(HONSO, HONSO);
// Bai 112
HONSO Tich(HONSO, HONSO);
// Bai 113
HONSO Thuong(HONSO, HONSO);
// Bai 114
int ktToiGian(HONSO);
// Bai 115
void QuiDongMau(HONSO&, HONSO&);
// Bai 116
void QuiDongTu(HONSO&, HONSO&);

int main()
{
	HONSO A,B;
	cout << "Nhap hon so A \n";
	Nhap(A);
	cout << "Hon so A vua nhap: ";
	Xuat(A);
	cout << "\nNhap hon so B \n";
	Nhap(B);
	cout << "\nHon so B vua nhap: ";
	Xuat(B);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 109 ---- > 116): ";
	cin >> baitap;
	while (baitap < 109 || baitap > 116)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 109 ---- > 116): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 109:
	{
		cout << "Rut gon hon so A ";
		RutGon(A);
		Xuat(A);
	}break;
	case 110:
	{
		cout << "Tong 2 hon so A va B ";
		Xuat(Tong(A, B));
	}break;
	case 111:
	{
		cout << "Hieu 2 hon so A va B ";
		Xuat(Hieu(A, B));
	}break;
	case 112:
	{
		cout << "Tich 2 hon so A va B ";
		Xuat(Tich(A, B));
	}break;
	case 113:
	{
		cout << "Thuong 2 hon so A va B ";
		Xuat(Thuong(A, B));
	}break;
	case 114:
	{
		cout << "Kiem tra toi gian hon so A \n";
		int kq = ktToiGian(A);
		if (kq == 1)
			cout << "Hon so toi gian";
		else
			cout << "Hon so khong toi gian";
	}break;
	case 115:
	{
		cout << "Qui dong mau hon so A va B ";
		QuiDongMau(A, B);
		Xuat(A);
		Xuat(B);
	}break;
	case 116:
	{
		cout << "Qui dong tu hon so A va B ";
		QuiDongTu(A, B);
		Xuat(A);
		Xuat(B);
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "\nNhap Mau: ";
	cin >> x.Mau;
}
void Xuat(HONSO x)
{
	cout << "\nNguyen = " << x.Nguyen;
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}
HONSO Tong(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen + y.Nguyen;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}

HONSO Tich(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}
HONSO Thuong(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen;
	HONSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}
int ktToiGian(HONSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1 && (x.Tu / x.Mau) == 0)
		return 1;
	return 0;
}
void QuiDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}
void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}

