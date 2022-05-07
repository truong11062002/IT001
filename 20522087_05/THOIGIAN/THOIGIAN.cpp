#include<iostream>
using namespace std;
struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
// Bai 128
int ktHopLe(THOIGIAN);
// Bai 129
THOIGIAN KeTiep(THOIGIAN);
// Bai 130
THOIGIAN TruocDo(THOIGIAN);
// Bai 131
int SoThuTu(THOIGIAN);
// Bai 132
int KhoangCach(THOIGIAN, THOIGIAN);
// Bai 133
int SoSanh(THOIGIAN, THOIGIAN);
int main()
{
	THOIGIAN A,B;
	cout << "Nhap thoi gian A";
	Nhap(A);
	cout << "Thoi gian A vua nhap: ";
	Xuat(A);
	cout << "\nNhap thoi gian B : ";
	Nhap(B);
	cout << "Thoi gian B vua nhap: ";
	Xuat(B);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 128 ---- > 133): ";
	cin >> baitap;
	while (baitap < 128 || baitap > 133)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 128 ---- > 133): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 128:
	{
		cout << "Kiem tra thoi gian hop le \n";
		int kq = ktHopLe(A);
		if (kq == 0)
			cout << "Thoi gian khong hop le ";
		else
			cout << "Thoi gian hop le ";
	}break;
	case 129:
	{
		cout << "Thoi gian ke tiep \n";
		Xuat(KeTiep(A));
	}break;
	case 130:
	{
		cout << "Thoi gian truoc do \n";
		Xuat(TruocDo(A));
	}break;
	case 131:
	{
		int kq = SoThuTu(A);
		cout << "So thu tu giay " << kq;
	}break;
	case 132:
	{
		int kq = KhoangCach(A, B);
		cout << "Khoang cach giua thoi gian A va B: " << kq;
	}break;
	case 133:
	{
		cout << "So sanh 2 thoi gian A va B \n";
		int kq = SoSanh(A, B);
		if (kq == 1)
			cout << "Thoi gian A lon hon B";
		if (kq == -1)
			cout << "Thoi gian A nho hon B";
		if (kq == 0)
			cout << " Thoi gian A bang B ";
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "\nNhap phut: ";
	cin >> x.Phut;
	cout << "\nNhap giay: ";
	cin >> x.Giay;
}
void Xuat(THOIGIAN x)
{
	cout << "\nGio = " << x.Gio;
	cout << "\nPhut = " << x.Phut;
	cout << "\nGiay = " << x.Giay;
}
int ktHopLe(THOIGIAN x)
{
	if (!(x.Gio >= 0 && x.Gio <= 23))
		return 0;
	if (!(x.Phut >= 0 && x.Phut <= 59))
		return 0;
	if (!(x.Giay >= 0 && x.Giay <= 69))
		return 0;
	return 1;
}
THOIGIAN KeTiep(THOIGIAN x)
{
	x.Giay++;
	if (x.Giay > 59)
	{
		x.Phut++;
		if (x.Phut > 59)
		{
			x.Gio++;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;
		}
		x.Giay = 0;
	}
	return x;
}
THOIGIAN TruocDo(THOIGIAN x)
{
	x.Giay--;
	if (x.Giay < 0)
	{
		x.Phut--;
		if (x.Phut < 0)
		{
			x.Gio--;
			if (x.Gio < 0)
				x.Gio = 59;
			x.Phut = 59;
		}
		x.Giay = 59;
	}
	return x;
}
int SoThuTu(THOIGIAN x)
{
	return x.Gio*3600 + x.Phut*60 + x.Giay;
}
int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(b - a);
}
int SoSanh(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	return 0;
}

