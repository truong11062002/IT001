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
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DIEM&);
void Xuat(DIEM);
// Bai 80
float KhoangCach(DUONGTHANG, DIEM);
// Bai 81
int ktThuoc(DUONGTHANG, DIEM);
// Bai 82
int ktTrung(DUONGTHANG, DUONGTHANG);
// Bai 83
int ktSongSong(DUONGTHANG, DUONGTHANG);
// Bai 84
int ktCat(DUONGTHANG, DUONGTHANG);
// Bai 85
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
// Bai 86
int ktVuongGoc(DUONGTHANG, DUONGTHANG);
int main()
{
	DUONGTHANG d, e;
	DIEM P;
	cout << "Nhap duong thang d: ";
	Nhap(d);
	cout << "Duong thang d vua nhap: ";
	Xuat(d);
	cout << "\nNhap duong thang e: ";
	Nhap(e);
	cout << "Duong thang e vua nhap: ";
	Xuat(e);
	cout << "\nNhap diem P: ";
	Nhap(P);
	cout << "Diem P vua nhap: ";
	Xuat(P);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 80 ---- > 86): ";
	cin >> baitap;
	while (baitap < 80 || baitap > 86)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 80 ---- > 86): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 80:
	{
		float kq = KhoangCach(d, P);
		cout << "Khoang cach giua d va P: " << kq;
	}break;
	case 81:
	{
		cout << "Kiem tra P co thuoc d hay khong \n";
		int kq = ktThuoc(d, P);
		if (kq == 1)
			cout << " P thuoc d ";
		else
			cout << " P khong thuoc d ";
	}break;
	case 82:
	{
		cout << "Kiem tra 2 duong thang co trung hay khong \n";
		int kq = ktTrung(d, e);
		if (kq == 1)
			cout << "Duong thang d va e trung";
		else
			cout << "Duong thang d va e khong trung";
	}break;
	case 83:
	{
		cout << "Kiem tra 2 duong thang co song song hay khong \n";
		int kq = ktSongSong(d, e);
		if (kq == 1)
			cout << "Duong thang d va e song song";
		else
			cout << "Duong thang d va e khong song song";
	}break;
	case 84:
	{
		cout << "Kiem tra 2 duong thang co cat hay khong \n";
		int kq = ktCat(d, e);
		if (kq == 1)
			cout << "Duong thang d va e cat";
		else
			cout << "Duong thang d va e khong cat";
	}break;
	case 85:
	{
		cout << "Giao diem cua 2 duong thang: ";
		Xuat(GiaoDiem(d, e));
	}break;
	case 86:
	{
		cout << "Kiem tra 2 duong thang co vuong goc hay khong \n";
		int kq = ktCat(d, e);
		if (kq == 1)
			cout << "Duong thang d va e vuong goc";
		else
			cout << "Duong thang d va e khong vuong goc";
	}break;
	default:
		break;
	}
	return 1;
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
float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu/mau;
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}
int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}

