#include<iostream>
#include<iomanip>
using namespace std;
struct sophuc
{
	int thuc;
	int ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);
SOPHUC Tong(SOPHUC[], int);
SOPHUC DauTien(SOPHUC[], int);
void InterchangeSort(SOPHUC[], int);

int main()
{
	SOPHUC b[1000];
	int k;
	SOPHUC P;
	int baitap;
	do {
		Nhap(b, k);
		Xuat(b, k);
		do
		{
			cout << "\nNhap bai tap can giai(209---->211): ";
			cin >> baitap;
		} while (baitap < 209 || baitap >211);
		switch (baitap)
		{
		case 209:
		{
			SOPHUC kq = Tong(b, k);
			cout << "Tong la: ";
			Xuat(kq);
		}break;
		case 210:
		{
			SOPHUC kq = DauTien(b, k);
			cout << "Duong dau tien: ";
			Xuat(kq);
		}break;
		case 211:
		{
			cout << "So phuc tang theo phan thuc: ";
			InterchangeSort(b, k);
			Xuat(b, k);
		}break;
		default:
			break;
		}
	} while (baitap >= 209 || baitap <= 211);
	return 1;
}
void Nhap(SOPHUC& P)
{
	cout << "Nhap phan thuc: ";
	cin >> P.thuc;
	cout << "\nNhap phan ao: ";
	cin >> P.ao;
}
void Xuat(SOPHUC P)
{
	cout << P.thuc << "+" << P.ao << "i" << endl;
}


void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang so phuc: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i].thuc = rand() % (200 + 1) - 100;
		a[i].ao = rand() % (200 + 1) - 100;
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
	{
		s.thuc = s.thuc + a[i].thuc;
		s.ao = s.ao + a[i].ao;
	}
	return s;
}
SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].thuc > 0 && a[i].ao > 0)
			return a[i];
	SOPHUC lc = { 0,0 };
	return lc;
}
void InterchangeSort(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].thuc > a[j].thuc)
				swap(a[i].thuc, a[j].thuc);
}
