#include<iostream>
#include<cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
//Bai050
float KhoangCach(DIEM, DIEM);
//Bai051
float KhoangCachX(DIEM, DIEM);
//Bai052
float KhoangCachY(DIEM, DIEM);
//Bai053
float KhoangCachGoc(DIEM);
//Bai054
DIEM DoiXungGoc(DIEM);
//Bai055
DIEM DoiXungHoanh(DIEM);
//Bai056
DIEM DoiXungTung(DIEM);
//Bai057
DIEM DoiXungPhanGiac1(DIEM);
//Bai058
DIEM DoiXungPhanGiac2(DIEM);
//Bai059
int ktTrung(DIEM,DIEM);
//Bai060
int ktThuoc1(DIEM);
//Bai061
int ktThuoc2(DIEM);
//Bai062
int ktThuoc3(DIEM);
//Bai063
int ktThuoc4(DIEM);
int main()
{
	DIEM P, Q, M;
	cout << "Nhap toa do P \n";
	Nhap(P);
	cout << "\nToa do diem vua P nhap: ";
	Xuat(P);
	cout << "\nNhap toa do Q ";
	Nhap(Q);
	cout << "\nToa do diem Q vua nhap: ";
	Xuat(Q);
	int baitap;
	cout << "\nNhap bai tap can giai tu Bai 050 ----> Bai 063: ";
	cin >> baitap;
	while (baitap < 50 || baitap > 63)
	{
		cout << "\nVui long nhap lai!!";
		cout << "\nNhap lai bai tap tu (50--->63): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 50:
	{
		float kq1 = KhoangCach(P, Q);
		cout << "\nKhoang cach: " << kq1;
	}break;
	case 51:
	{
		float kq2 = KhoangCachX(P, Q);
		cout << "\nKhoang cach theo phuong Ox: " << kq2;
	}break;
	case 52:
	{
		float kq3 = KhoangCachY(P, Q);
		cout << "\nKhoang cach theo phuong Oy: " << kq3;
	}break;
	case 53:
	{
		float kq4 = KhoangCachGoc(P);
		cout << "\nKhoang cach goc: " << kq4;
	}break;
	case 54:
	{
		cout << "\nDoi xung goc: ";
		Xuat(DoiXungGoc(P));
	}break;
	case 55:
	{
		cout << "\nDoi xung hoanh: ";
		Xuat(DoiXungHoanh(P));
	}break;
	case 56:
	{
		cout << "\nDoi xung tung: ";
		Xuat(DoiXungTung(P));
	}break;
	case 57:
	{
		cout << "\nDoi xung phan giac 1: ";
		Xuat(DoiXungPhanGiac1(P));
	}break;
	case 58:
	{
		cout << "\nDoi xung phan giac 2: ";
		Xuat(DoiXungPhanGiac2(P));
	}break;
	case 59:
	{
		cout << "Kiem tra P va Q co trung hay khong ";
		int kq = ktTrung(P, Q);
		if (kq == 1)
			cout << "\nA va Q trung nhau ";
		else
			cout << "\nA va Q khong trung nhau ";
	}break;
	case 60:
	{
		cout << "Kiem tra co thuoc phan tu thu nhat hay khong ";
		int kq = ktThuoc1(P);
		if (kq == 1)
			cout << "\nThuoc phan tu thu nhat ";
		else
			cout << "\nKhong thuoc phan tu nhat ";
	}break;
	case 61:
	{
		cout << "Kiem tra co thuoc phan tu thu hai hay khong ";
		int kq = ktThuoc2(P);
		if (kq == 1)
			cout << "\nThuoc phan tu thu hai ";
		else
			cout << "\nKhong thuoc phan tu hai ";
	}break;
	case 62:
	{
		cout << "Kiem tra co thuoc phan tu thu ba hay khong ";
		int kq = ktThuoc3(P);
		if (kq == 1)
			cout << "\nThuoc phan tu thu ba ";
		else
			cout << "\nKhong thuoc phan tu ba ";
	}break;
	case 63:
	{
		cout << "Kiem tra co thuoc phan tu thu ba hay khong ";
		int kq = ktThuoc3(P);
		if (kq == 1)
			cout << "\nThuoc phan tu thu ba ";
		else
			cout << "\nKhong thuoc phan tu ba ";
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
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}
float KhoangCachY(DIEM P, DIEM Q)
{
	return abs(Q.y - P.y);
}
float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.y + P.y * P.y);
}
DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}
DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}
DIEM DoiXungTung(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}
DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}
DIEM DoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}
int ktTrung(DIEM P,DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y)
		return 1;
	return 0;
}
int ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y >0)
		return 1;
	return 0;
}
int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}
int ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return 1;
	return 0;
}