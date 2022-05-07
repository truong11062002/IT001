#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct HopSua
{
	string NhanHieu;
	float TrongLuong;
	NGAY HanSuDung;
};
typedef struct HopSua HOPSUA;

void Nhap(HOPSUA[], int&);
void Xuat(HOPSUA[], int);
void Nhap(NGAY&);
void Xuat(NGAY);
int DemHetHan(HOPSUA[], int, NGAY&);
HOPSUA NangNhat(HOPSUA[], int);

int main()
{
	HOPSUA a[100];
	int n;
	NGAY x;
	int dem;
	int luachon;

	do
	{
		cout << "1. Dem So Luong San Pham Het Han";
		cout << endl << "2. Tim Hop Sua Co Trong Luong Lon Nhat";
		cout << endl << "0. Ket Thuc";
		cout << endl << "Hay Lua Chon: ";
		cin >> luachon;
		switch (luachon)
		{
		case 0:
			break;
		case 1:
			Nhap(a, n);
			cout << endl << "Mang Ban Dau: ";
			Xuat(a, n);
			dem = DemHetHan(a, n, x);
			cout << endl << "So Hop Sua Con Han Su Dung: " << dem << endl << endl;
			break;
		case 2:
			Nhap(a, n);
			cout << endl << "Mang Ban Dau: ";
			Xuat(a, n);
			cout << endl << endl << "Hop Sua Nang Nhat: ";
			cout << (NangNhat(a, n).NhanHieu) << endl << endl;
			break;
		default:
			cout << endl << "Hay Nhap Lai!" << endl << endl;
		}
	} while (luachon != 0);
	return 0;
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

void Xuat(NGAY n)
{
	cout << "Ngay " << n.Ngay;
	cout << " Thang " << n.Thang;
	cout << " Nam " << n.Nam;
}

void Nhap(HOPSUA a[], int& n)
{
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhap Nhan Hieu: ";
		cin >> a[i].NhanHieu;
		cout << "Trong Luong: ";
		cin >> a[i].TrongLuong;
		cout << "Han Su Dung: ";
		Nhap(a[i].HanSuDung);
	}
}

void Xuat(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		cout << endl << "     " << "+ Nhan Hieu: " << a[i].NhanHieu;
		cout << endl << "     " << "+ Trong Luong: " << a[i].TrongLuong;
		cout << endl << "     " << "+ Han Su Dung: ";
		Xuat(a[i].HanSuDung);
	}
}

int DemHetHan(HOPSUA a[], int n, NGAY& x)
{
	int dem = 0;
	cout << endl << "Nhap Ngay Hien Tai: ";
	Nhap(x);
	for (int i = 0; i < n; i++)
	{
		if (x.Nam > a[i].HanSuDung.Nam)
			dem++;
		else if (x.Nam == a[i].HanSuDung.Nam && x.Thang > a[i].HanSuDung.Thang)
			dem++;
		else if (x.Nam == a[i].HanSuDung.Nam && x.Thang == a[i].HanSuDung.Thang && x.Ngay > a[i].HanSuDung.Ngay)
			dem++;
	}
	return dem;
}

HOPSUA NangNhat(HOPSUA a[], int n)
{
	HOPSUA max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i].TrongLuong > max.TrongLuong)
			max = a[i];
	return max;
}