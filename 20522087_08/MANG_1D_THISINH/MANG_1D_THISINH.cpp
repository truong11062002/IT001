#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct ThiSinh
{
	string MaSo;
	string HoTen;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
typedef struct ThiSinh THISINH;

void Nhap(THISINH[], int&);
void Xuat(THISINH[], int);
void LietKe(THISINH[], int);
void SapXep(THISINH[], int);

int main()
{
	THISINH a[100];
	int n;
	Nhap(a, n);
	SapXep(a, n);
	cout << endl << endl << "Danh Sach Thi Sinh Co Diem Tong Giam Dan: ";
	Xuat(a, n);
	cout << endl << endl << "Cac Thi Sinh Dau: ";
	LietKe(a, n);
	return 0;
}

void Nhap(THISINH a[], int& n)
{
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhap Ma So: ";
		cin >> a[i].MaSo;
		cout << "Nhap Ho Ten: ";
		cin >> a[i].HoTen;
		cout << "Nhap Diem Toan: ";
		cin >> a[i].Toan;
		cout << "Nhap Diem Ly: ";
		cin >> a[i].Ly;
		cout << "Nhap Diem Hoa: ";
		cin >> a[i].Hoa;
		a[i].Tong = a[i].Hoa + a[i].Ly + a[i].Toan;
	}
}

void Xuat(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		cout << endl << "     " << "+ Ma So Thi Sinh: " << a[i].MaSo;
		cout << endl << "     " << "+ Ten Thi Sinh: " << a[i].HoTen;
		cout << endl << "     " << "+ Diem Toan: " << a[i].Toan;
		cout << endl << "     " << "+ Diem Ly: " << a[i].Ly;
		cout << endl << "     " << "+ Diem Hoa: " << a[i].Hoa;
		cout << endl << "     " << "+ Tong Diem: " << a[i].Tong;
	}
}

void LietKe(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].Tong > 15 && a[i].Hoa != 0 && a[i].Ly != 0 && a[i].Toan != 0)
			cout << endl << "     " << "+ Ten Thi Sinh: " << a[i].HoTen;
}

void SapXep(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Tong < a[j].Tong)
				swap(a[i], a[j]);
}