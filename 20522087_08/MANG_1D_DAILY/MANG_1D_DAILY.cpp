#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
struct ngay
{
	int a;
	int b;
	int c;
};
typedef struct ngay NGAY;
struct daily
{
	string MaSo;
	string Ten;
	int DienThoai;
	NGAY NgayNhan;
	string DiaChi;
	string EMail;
};
typedef struct daily DAILY;
void Nhap(DAILY[], int&);
void Nhap(DAILY& A);
void Nhap(NGAY& A);
void Xuat(DAILY[], int);
void Xuat(DAILY A);
void Xuat(NGAY A);
void TimDaiLy(DAILY[], int);
int main()
{
	DAILY a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	TimDaiLy(a, n);
	return 1;
}
void Nhap(DAILY a[], int& n)
{
	cout << "Nhap so dai ly : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}
void Nhap(DAILY& A)
{
	cout << endl << "Ma Dai Ly : ";
	cin.ignore();
	getline(cin, A.MaSo);
	cout << "Ten Dai Ly : ";
	getline(cin, A.Ten);
	cout << "Dien Thoai : ";
	cin >> A.DienThoai;
	cout << "Ngay Tiep Nhan : \n";
	Nhap(A.NgayNhan);
	cout << "Dia Chi : ";
	cin.ignore();
	getline(cin, A.DiaChi);
	cout << "Email : ";
	getline(cin, A.EMail);
}
void Nhap(NGAY& A)
{
	cout << setw(25) << "Ngay : ";
	cin >> A.a;
	cout << setw(25) << "Thang : ";
	cin >> A.b;
	cout << setw(25) << "Nam : ";
	cin >> A.c;
}
void Xuat(DAILY a[], int n)
{
	cout << endl << endl;
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
void Xuat(DAILY A)
{

	cout << setw(-20) << "MS : " << A.MaSo << endl;
	cout << A.Ten << endl;
	cout << setw(-20) << "DT : " << A.DienThoai << endl;
	cout << setw(-20) << "Ngay Nhan : ";
	Xuat(A.NgayNhan);
	cout << endl << setw(-20) << "Dia Chi : " << A.DiaChi << endl;
	cout << setw(-20) << "Email : " << A.EMail << endl << endl;
}
void Xuat(NGAY A)
{
	cout << A.a << "/" << A.b << "/" << A.c;
}
void TimDaiLy(DAILY a[], int n)
{
	string dailymuontim;
	cout << "\n\n\nNhap ten dai ly muon tim : ";
	getline(cin, dailymuontim);
	for (int i = 0; i < n; i++)
	{
		if (dailymuontim == a[i].Ten)
			Xuat(a[i]);
	}
}