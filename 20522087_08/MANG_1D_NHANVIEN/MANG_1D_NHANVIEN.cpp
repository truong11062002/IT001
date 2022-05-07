#include<iostream>
#include<string>
using namespace std;
struct nhanvien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct nhanvien NHANVIEN;
void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);
void Nhap(NHANVIEN[], int&);
void Xuat(NHANVIEN[], int);
NHANVIEN LuongCaoNhat(NHANVIEN[], int);
float Tong(NHANVIEN[], int);
void InterchangeSort(NHANVIEN[], int);
int main()
{
	NHANVIEN b[100];
	int k;
	int luachon;
	do {
		cout << "\n0.Ket thuc" << endl;
		cout << "1.Tim nhan vien luong cao nhat" << endl;
		cout << "2.Tinh tong luong nhan vien" << endl;
		cout << "3.Sap xep mang tang dan theo luong nhan vien" << endl;
		cout << "Nhap lua chon: ";
		cin >> luachon;
		switch (luachon)
		{
		case 0:
			break;
		case 1:
		{
			Nhap(b, k);
			cout << "Nhan vien luong cao nhat: ";
			NHANVIEN kq = LuongCaoNhat(b, k);
			Xuat(kq);
		}break;
		case 2:
		{
			Nhap(b, k);
			float kq = Tong(b, k);
			cout << "Tong luong cac nhan vien: " << kq;
		}break;
		case 3:
		{
			Nhap(b, k);
			cout << "Sap xep mang tang dan theo luong: ";
			InterchangeSort(b, k);
			Xuat(b, k);
		}break;
		default:
			break;
		}
	} while (luachon <= 3 || luachon >= 1);
	return 0;
}
void Nhap(NHANVIEN& x)
{
	cout << "\nNhap ma so: ";
	cin >> x.MaSo;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, x.HoTen);
	cout << "Nhap luong: ";
	cin >> x.Luong;
}
void Xuat(NHANVIEN x)
{
	cout << "Ma so: " << x.MaSo << endl;
	cout << "Ho ten: " << x.HoTen << endl;
	cout << "Luong: " << x.Luong << endl;
}
void Nhap(NHANVIEN a[], int& n)
{
	cout << "Nhap so luong mang nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Mang a[" << i << "]: ";
		Xuat(a[i]);
	}
}
NHANVIEN LuongCaoNhat(NHANVIEN a[], int n)
{
	NHANVIEN lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].Luong > lc.Luong)
			lc.Luong = a[i].Luong;
	return lc;
}
float Tong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + a[i].Luong;
	return s;
}
void InterchangeSort(NHANVIEN a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].Luong > a[j].Luong)
				swap(a[i].Luong, a[j].Luong);
}
