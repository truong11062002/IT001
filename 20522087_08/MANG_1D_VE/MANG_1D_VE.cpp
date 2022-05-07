#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;

};
typedef struct ThoiGian THOIGIAN;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct Ve
{
	string TenPhim;
	int GiaTien;
	THOIGIAN XuatChieu;
	NGAY NgayXem;
};
typedef struct Ve VE;

void Nhap(THOIGIAN&);
void Nhap(NGAY&);
void Nhap(VE[], int&);
void Xuat(THOIGIAN);
void Xuat(NGAY);
void Xuat(VE[], int);
int Tong(VE[], int);
int DemGiay(THOIGIAN);
int SoSanh(THOIGIAN, THOIGIAN);
int SoSanhHaiNgay(NGAY, NGAY);
void SapXep(VE[], int);

int main()
{
	THOIGIAN t;
	NGAY d;
	int n;
	VE a[100];
	Nhap(a, n);
	SapXep(a, n);
	Xuat(a, n);
	cout << endl << endl << "Tong Gia Tien Cac Ve: " << Tong(a, n);
	return 0;
}

void Nhap(THOIGIAN& t)
{
	cout << endl << "Nhap Gio: ";
	cin >> t.Gio;
	cout << "Nhap Phut: ";
	cin >> t.Phut;
	cout << "Nhap Giay: ";
	cin >> t.Giay;
}

void Nhap(NGAY& n)
{
	cout << endl << "Nhap Ngay: ";
	cin >> n.Ngay;
	cout << "Nhap Thang: ";
	cin >> n.Thang;
	cout << "Nhap Nam: ";
	cin >> n.Nam;
}

void Nhap(VE a[], int& n)
{
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhap Ten Phim: ";
		cin >> a[i].TenPhim;
		cout << "Nhap Gia Tien: ";
		cin >> a[i].GiaTien;
		cout << "Nhap Xuat Chieu: ";
		Nhap(a[i].XuatChieu);
		cout << "Nhap Ngay Xem: ";
		Nhap(a[i].NgayXem);
	}
}

void Xuat(THOIGIAN t)
{
	cout << t.Gio << " Gio ";
	cout << t.Phut << " Phut ";
	cout << t.Giay << " Giay";
}

void Xuat(NGAY n)
{
	cout << "Ngay " << n.Ngay;
	cout << " Thang " << n.Thang;
	cout << " Nam " << n.Nam;
}

void Xuat(VE a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		cout << endl << "     " << "+ Ten Phim: " << a[i].TenPhim;
		cout << endl << "     " << "+ Gia Ve: " << a[i].GiaTien;
		cout << endl << "     " << "+ Xuat Chieu: ";
		Xuat(a[i].XuatChieu);
		cout << endl << "     " << "+ Ngay Chieu: ";
		Xuat(a[i].NgayXem);
	}
}

int Tong(VE a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i].GiaTien;
	return s;
}

int DemGiay(THOIGIAN t)
{
	int dem = t.Gio * 3600 + t.Phut * 60 + t.Giay;
	return dem;
}

int SoSanh(THOIGIAN t1, THOIGIAN t2)
{
	int a = DemGiay(t1);
	int b = DemGiay(t2);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int SoSanhHaiNgay(NGAY d1, Ngay d2)
{
	if (d1.Nam > d2.Nam)
		return 1;
	if (d1.Nam < d2.Nam)
		return -1;
	if (d1.Thang > d2.Thang)
		return 1;
	if (d1.Thang < d2.Thang)
		return -1;
	if (d1.Ngay > d2.Ngay)
		return 1;
	if (d1.Ngay < d2.Ngay)
		return -1;
	return 0;
}

void SapXep(VE a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanhHaiNgay(a[i].NgayXem, a[j].NgayXem) == 1)
				swap(a[i], a[j]);
			else if (SoSanhHaiNgay(a[i].NgayXem, a[j].NgayXem) == 0)
				if (SoSanh(a[i].XuatChieu, a[j].XuatChieu) == 1)
					swap(a[i], a[j]);
		}
}