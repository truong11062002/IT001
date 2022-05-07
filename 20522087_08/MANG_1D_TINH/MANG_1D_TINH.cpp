#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
#include <string>
using namespace std;

struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef struct Tinh TINH;

void Nhap(TINH[], int&);
void Xuat(TINH[], int);
void LietKe(TINH[], int);
TINH DienTichMax(TINH[], int);
void DienTichGiam(TINH[], int);

int main()
{
	TINH a[100];
	int n;
	int luachon;
	TINH max;

	do
	{
		cout << "1. Liet Ke Cac Tinh Co Dan So Lon Hon 1000000";
		cout << endl << "2. Tim Tinh Co Dien Tich Lon Nhat";
		cout << endl << "3. Sap Xep Cac Tinh Giam Dan Theo Dien Tich";
		cout << endl << "0. Ket Thuc";
		cout << endl << "Hay Lua Chon: ";
		cin >> luachon;
		switch (luachon)
		{
		case 0:
			break;
		case 1:
			Nhap(a, n);
			cout << endl << "Mang Ban Dau: " << endl;
			Xuat(a, n);
			cout << endl << endl << "Cac Tinh Co Dan So Lon Hon 1000000: ";
			LietKe(a, n);
			cout << endl << endl;
			break;
		case 2:
			Nhap(a, n);
			cout << endl << "Mang Ban Dau: " << endl;
			Xuat(a, n);
			max = DienTichMax(a, n);
			cout << endl << endl << "Tinh Co Dien Tich Lon Nhat: " << max.TenTinh << "( Ma So: " << max.MaSo << ")";
			cout << endl << endl;
			break;
		case 3:
			Nhap(a, n);
			cout << endl << "Mang Ban Dau: " << endl;
			Xuat(a, n);
			DienTichGiam(a, n);
			cout << endl << endl << "Mang Sau Khi Sap Xep: " << endl;
			Xuat(a, n);
			cout << endl << endl;
			break;
		default:
			cout << endl << "Hay Nhap Lai!" << endl << endl;
		}
	} while (luachon != 0);
	return 0;
}

void Nhap(TINH a[], int& n)
{
	cout << "Nhap So Tinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Tinh[" << i + 1 << "]:" << endl;
		cout << "Nhap Ma So Tinh: ";
		cin >> a[i].MaSo;
		cout << "Nhap Ten Tinh: ";
		cin >> a[i].TenTinh;
		cout << "Nhap Dan So Tinh: ";
		cin >> a[i].DanSo;
		cout << "Nhap Dien Tich Tinh: ";
		cin >> a[i].DienTich;
	}
}

void Xuat(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "]: ";
		cout << endl << "     " << "+ Ma So Tinh: " << a[i].MaSo;
		cout << endl << "     " << "+ Ten Tinh: " << a[i].TenTinh;
		cout << endl << "     " << "+ Dan So Tinh: " << a[i].DanSo;
		cout << endl << "     " << "+ Dien Tich Tinh: " << a[i].DienTich;
	}
}

void LietKe(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].DanSo > 1000000)
		{
			cout << endl << "Ten Tinh: " << a[i].TenTinh;
			cout << "( Ma So: " << a[i].MaSo << ")";
		}
}

TINH DienTichMax(TINH a[], int n)
{
	TINH max = a[0];
	for (int i = 0; i < n; i++)
		if (max.DienTich < a[i].DienTich)
			max = a[i];
	return max;
}

void DienTichGiam(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DienTich < a[j].DienTich)
			{
				TINH t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}