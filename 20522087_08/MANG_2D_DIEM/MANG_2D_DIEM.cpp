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
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);

int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int DemKhongTrung(DIEM[][100], int, int);
int ktThuoc(DUONGTHANG, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTHANG);

float KhoangCach(DIEM , DIEM );
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);
int main()
{
	DIEM b[100][100];
	int k, l;
	DIEM P;
	int baitap;
	do
	{
		Nhap(b, k, l);
		Xuat(b, k, l);
		do {
			cout << "\nNhap bai tap can giai(236---->240): ";
			cin >> baitap;
		} while (baitap < 236 || baitap > 240);
		switch (baitap)
		{
		case 236:
		{
			int kq = DemThuoc3(b, k, l);
			cout << "\nDem diem thuoc phan tu thu 3: " << kq;
		}break;
		case 237:
		{
			DIEM P;
			cout << "Nhap P: ";
			Nhap(P);
			int kq = TanSuat(b, k, l, P);
			cout << "\nDem so lan xuat hien cua toa do diem P: " << kq;
		}break;
		case 238:
		{
			int kq = DemKhongTrung(b, k, l);
			cout << "Dem so luong diem khong trung: " << kq;
		}break;
		case 239:
		{
			cout << "Nhap duong thang d: ";
			DUONGTHANG d;
			Nhap(d);
			int kq = DemDiem(b, k, l, d);
			cout << "Dem diem thuoc duong thang: " << kq;
		}break;
		case 240:
		{
			cout << "Nhap duong tron c: ";
			DUONGTRON c;
			Nhap(c);
			int kq = DemDiem(b, k, l, c);
			cout << "Dem diem thuoc duong tron: " << kq;
		}break;
		default:
			break;
		}
		return 1;
	} while (baitap >= 236 || baitap <= 240);
}
void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")" << endl;
}
void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << d.a << "x+" << d.b << "y+" << d.c << endl;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh: ";
	cout << c.R;
}
void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
}
void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}
int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}
int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}
int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				dem++;
	return dem;
}
int DemKhongTrung(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) == 1)
				dem++;
	return dem;
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}
int DemDiem(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]))
				dem++;
	return dem;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(c, a[i][j]))
				dem++;
	return dem;
}
