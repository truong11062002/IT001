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
// Bai 156
float DienTich(HINHCAU);
// Bai 157
float TheTich(HINHCAU);
// Bai 158
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
int ktThuoc(HINHCAU, DIEMKHONGGIAN);
// Bai 159
float TuongDoi(HINHCAU, HINHCAU);
int main()
{
	HINHCAU hc;
	DIEMKHONGGIAN M;
	cout << "Nhap hinh cau: ";
	Nhap(hc);
	cout << "Nhap diem M: ";
	Nhap(M);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 156 ---- > 159): ";
	cin >> baitap;
	while (baitap < 156 || baitap > 159)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 156 ---- > 159): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 156:
	{
		float kq = DienTich(hc);
		cout << "Dien tich hinh cau: " << kq;
	}break;
	case 157:
	{
		float kq = TheTich(hc);
		cout << "The tich hinh cau: " << kq;
	}break;
	case 158:
	{
		cout << "Kiem tra toa do diem M co nam trong hinh cau hay khong \n";
		int kq = ktThuoc(hc, M);
		if (kq == 1)
			cout << "Diem khong gian nam trong hinh cau ";
		else
			cout << "Diem khong gian nam ngoai hinh cau ";
	}break;
	case 159:
	{
		HINHCAU hc2;
		cout << "Nhap hinh cau 2: \n";
		Nhap(hc2);
		cout << "Kiem tra tuong doi 2 hinh cau \n";
		int kq = TuongDoi(hc, hc2);
		switch (kq)
		{
		case 0:
		{
			cout << "Hai hinh cau trung nhau";
		}break;
		case 1:
		{
			cout << "Hai hinh cau roi nhau ";
		}break;
		case 2:
		{
			cout << "Hai hinh cau tiep xuc ngoai ";
		}break;
		case 3:
		{
			cout << "Hai hinh cau cat nhau ";
		}break;
		case 4:
		{
			cout << "Hai hinh cau tiep xuc trong ";
		}break;
		case 5:
		{
			cout << "Hai hinh cau chua trong nhau ";
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
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
	cout << "\nNhap z: ";
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
float DienTich(HINHCAU c)
{
	return (float)(4 * 3.14 * c.R * c.R);
}
float TheTich(HINHCAU c)
{
	return (float)((float)4 / 3 * 3.14 * c.R * c.R * c.R);
}
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}
int ktThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}
float TuongDoi(HINHCAU c1, HINHCAU c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
