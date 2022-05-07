#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MatHang
{
	string TenHang;
	int DonGia;
	int LuongTon;
};
typedef struct MatHang MATHANG;

void Nhap(MATHANG[], int&);
void Xuat(MATHANG[], int);
MATHANG TongTonMax(MATHANG[], int);
int SoLuongTon(MATHANG[], int);

int main()
{
	MATHANG a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << endl << "Mat Hang Co Tong Gia Tri Ton Lon Nhat: " << TongTonMax(a, n).TenHang;
	cout << endl << endl << "So Mat Hang Co Luong Ton Hon 1000: " << SoLuongTon(a, n) << endl;
	return 0;
}

void Nhap(MATHANG a[], int& n)
{
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhap Mat Hang: ";
		cin >> a[i].TenHang;
		cout << "Nhap Don Gia: ";
		cin >> a[i].DonGia;
		cout << "Nhap Luong Ton: ";
		cin >> a[i].LuongTon;
	}
}

void Xuat(MATHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		cout << endl << "     " << "+ Mat Hang: " << a[i].TenHang;
		cout << endl << "     " << "+ Don Gia: " << a[i].DonGia;
		cout << endl << "     " << "+ Luong Ton: " << a[i].LuongTon;
	}
}

MATHANG TongTonMax(MATHANG a[], int n)
{
	MATHANG max = a[0];
	for (int i = 0; i < n; i++)
		if ((long)max.DonGia * max.LuongTon < (long)a[i].DonGia * a[i].LuongTon)
			max = a[i];
	return max;
}

int SoLuongTon(MATHANG a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].LuongTon > 1000)
			dem++;
	return dem;
}