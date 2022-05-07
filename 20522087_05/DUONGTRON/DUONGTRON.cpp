#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
// Bai 147
float ChuVi(DUONGTRON);
// Bai 148
float DienTich(DUONGTRON);
// Bai 149
float KhoangCach(DIEM, DIEM);
// Bai 150
int TuongDoi(DUONGTRON, DIEM);
// Bai 151
float KhoangCach(DUONGTHANG, DIEM);
int TuongDoi1(DUONGTRON, DUONGTHANG);
// Bai 152
int TuongDoi2(DUONGTRON, DUONGTRON);
int ktThuoc(DUONGTRON, DIEM);
int main()
{
	DUONGTRON c;
	cout << "\nNhap duong tron c: ";
	Nhap(c);
	cout << "\nDuong tron c vua nhap: ";
	Xuat(c);

	DIEM P;
	cout << "\nNhap toa do diem P: ";
	Nhap(P);
	cout << "Toa do diem P vua nhap: ";
	Xuat(P);

	DUONGTHANG d;
	cout << "\nNhap duong thang d: ";
	Nhap(d);
	cout << "\nDuong thang d vua nhap: ";
	Xuat(d);

	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 147 ---- > 152): ";
	cin >> baitap;
	while (baitap < 147 || baitap > 152)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 147 ---- > 152): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 147:
	{
		float kq = ChuVi(c);
		cout << "Chu vi cua duong tron c: " << kq;
	}break;
	case 148:
	{
		float kq = DienTich(c);
		cout << "Dien tich cua duong trong c: " << kq;
	}break;
	case 149:
	{
		cout << "Kiem tra diem P co nam trong duong tron hay khong \n";
		int kq = ktThuoc(c, P);
		if (kq == 1)
			cout << "Diem P nam trong duong tron c ";
		else
			cout << "Diem P khong nam trong duong tron c ";
	}break;
	case 150:
	{
		cout << "Xet vi tri tuong doi cua diem tren duong tron \n";
		int kq = TuongDoi(c, P);
		if (kq == 2)
			cout << "Diem nam ngoai duong tron ";
		if (kq == 1)
			cout << "Diem nam tren duong tron ";
		if (kq == 0)
			cout << "Diem nam trong duong tron ";
	}break;
	case 151:
	{
		cout << "Xet vi tri tuong doi cua duong thang tren duong tron \n";
		int kq = TuongDoi1(c, d);
		if (kq == 2)
			cout << "Duong thang cat duong tron tai 2 diem ";
		if (kq == 1)
			cout << "Duong thang tiep xuc voi duong tron ";
		if (kq == 0)
			cout << "Duong thang khong cat duong tron ";
	}break;
	case 152:
	{
		DUONGTRON v;
		cout << "Nhap duong tron v: ";
		Nhap(v);
		DIEM Q;
		cout << "Nhap diem Q: ";
		Nhap(Q);
		cout << "Vi tri tuong doi cua 2 duong tron \n";
		int kq = TuongDoi2(c, v);
		switch (kq)
		{
		case 0:
		{
			cout << "Hai duong tron trung nhau";
		}break;
		case 1:
		{
			cout << "Hai duong tron roi nhau";
		}break;
		case 2:
		{
			cout << "Hai duong tron tiep xuc ngoai ";
		}break;
		case 3:
		{
			cout << "Hai duong tron cat nhau ";
		}break;
		case 4:
		{
			cout << "Hai duong tron tiep xuc trong ";
		}break;
		case 5:
		{
			cout << "Hai duong tron chua trong nhau ";
		}break;
		default:
			break;
		}
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}
void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << "\nxa = " << d.a;
	cout << "\nya = " << d.b;
	cout << "\nxb = " << d.c;
}
float ChuVi(DUONGTRON c)
{
	return (float)(2 * 3.14 * c.R);
}
float DienTich(DUONGTRON c)
{
	return (float)(3.14 * c.R * c.R);
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I,P);
	if (kc <= c.R)
		return 1;
	return 0;
}
int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}
float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
int TuongDoi1(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}
int TuongDoi2(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
