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

struct ChuyenBay
{
	string MaSo;;
	NGAY NgayBay;
	THOIGIAN GioBay;
	string NoiDi;
	string NoiDen;
};
typedef struct ChuyenBay CHUYENBAY;

void Nhap(NGAY&);
void Nhap(THOIGIAN&);
void Nhap(CHUYENBAY[], int& n);
void Xuat(NGAY);
void Xuat(THOIGIAN);
void Xuat(CHUYENBAY);
void Xuat(CHUYENBAY[], int);
int TanSuat(CHUYENBAY[], int, NGAY);
NGAY NhieuNhat(CHUYENBAY[], int);
void TimKiem(CHUYENBAY[], int, string);

int main()
{
	CHUYENBAY a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << endl << "Ngay Co Nhieu Chuyen Bay Nhat: ";
	Xuat(NhieuNhat(a, n));

	string MaSo;
	cout << endl << endl << "Nhap Ma So Can Tim Kiem: ";
	cin >> MaSo;
	TimKiem(a, n, MaSo);
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

void Nhap(CHUYENBAY a[], int& n)
{
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhap Ma So: ";
		cin >> a[i].MaSo;
		cout << "Nhap Ngay Bay: ";
		Nhap(a[i].NgayBay);
		cout << "Nhap Gio Bay: ";
		Nhap(a[i].GioBay);
		cout << "Nhap Noi Di: ";
		cin >> a[i].NoiDi;
		cout << "Nhap Noi Den: ";
		cin >> a[i].NoiDen;
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

void Xuat(CHUYENBAY a)
{
	cout << endl << "     " << "+ Ma So: " << a.MaSo;
	cout << endl << "     " << "+ Ngay Bay: ";
	Xuat(a.NgayBay);
	cout << endl << "     " << "+ Gio Bay: ";
	Xuat(a.GioBay);
	cout << endl << "     " << "+ Noi Di: " << a.NoiDi;
	cout << endl << "     " << "+ Noi Den: " << a.NoiDen;
}

void Xuat(CHUYENBAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		Xuat(a[i]);
	}
}

int TanSuat(CHUYENBAY a[], int n, NGAY d)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		NGAY t = a[i].NgayBay;
		if (d.Nam == t.Nam && d.Thang == t.Thang && d.Ngay == t.Ngay)
			dem++;
	}
	return dem;
}

NGAY NhieuNhat(CHUYENBAY a[], int n)
{
	NGAY max = a[0].NgayBay;
	for (int i = 1; i < n; i++)
		if (TanSuat(a, n, a[i].NgayBay) > TanSuat(a, n, max))
			max = a[i].NgayBay;
	return max;
}

void TimKiem(CHUYENBAY a[], int n, string MaSo)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == MaSo)
		{
			cout << endl << endl << "Chuyen Bay Can Tim: ";
			Xuat(a[i]);
			return;
		}
	cout << endl << endl << "Khong Tim Thay Chuyen Bay!";
}