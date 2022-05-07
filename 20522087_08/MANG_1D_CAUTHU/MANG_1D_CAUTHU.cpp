#include <iostream>
#include <iomanip>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nam;
};
typedef struct ngay NGAY;

struct cauthu
{
	string MaSo;
	string HoTen;
	NGAY NgaySinh;
};
typedef struct cauthu CAUTHU;

void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(CAUTHU&);
void Xuat(CAUTHU);
void Nhap(CAUTHU[], int&);
void Xuat(CAUTHU[], int);
bool ktHopLe(NGAY);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
void LietKe(CAUTHU[], int);
int TinhTuoi(CAUTHU);
int TuoiNhoNhat(CAUTHU[], int);
void SapGiamNgaySinh(CAUTHU[], int);

int main()
{
	CAUTHU b[1000];
	int k;

	Nhap(b, k);
	Xuat(b, k);

	LietKe(b, k);

	SapGiamNgaySinh(b, k);
	cout << "\nMang sau khi sap ngay sinh cua cau thu giam dan: \n";
	Xuat(b, k);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "	Nhap ngay: ";
	cin >> x.ng;
	cout << "	Nhap thang: ";
	cin >> x.th;
	cout << "	Nhap nam: ";
	cin >> x.nam;
}

void Xuat(NGAY x)
{
	cout << "Ngay/Thang/Nam: " << x.ng << "/" << x.th << "/" << x.nam << endl;
}

void Nhap(CAUTHU& x)
{
	cout << "\nNhap ma cau thu: ";
	cin >> x.MaSo;
	cout << "Nhap ho ten cau thu: ";
	cin >> x.HoTen;
	cout << "Nhap ngay sinh: \n";
	Nhap(x.NgaySinh);
	while (ktHopLe(x.NgaySinh) == false)
	{
		cout << "\nNGAY DA NHAP KHONG HOP LE !! Vui long nhap lai: \n";
		Nhap(x.NgaySinh);
	}
}

void Xuat(CAUTHU x)
{
	cout << "\nMa cau thu: " << x.MaSo;
	cout << "\nHo ten cau thu: " << x.HoTen;
	cout << "\nNgay sinh cau thu: ";
	Xuat(x.NgaySinh);
}

void Nhap(CAUTHU a[], int& n)
{
	cout << "Nhap so cau thu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap cau thu thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n=========================================\n";
	}
}

void Xuat(CAUTHU a[], int n)
{
	cout << "\n\t\tDANH SACH CAU THU BAN DAU: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Cau thu thu " << i + 1 << ": ";
		Xuat(a[i]);
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}

bool ktHopLe(NGAY x)
{
	if (x.nam < 1)
		return false;
	if (x.th < 1)
		return false;
	if (x.th > 12)
		return false;
	if (x.ng < 1)
		return false;
	if (x.ng > SoNgayToiDaTrongThang(x))
		return false;
	return true;
}

bool ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return true;
	if (x.nam % 400 != 0)
		return true;
	return false;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}

void LietKe(CAUTHU a[], int n)
{
	cout << "\nDANH SACH CAC CAU THU NHO TUOI NHAT TRONG MANG:\n";
	int lc = TuoiNhoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (TinhTuoi(a[i]) == lc)
		{
			Xuat(a[i]);
			cout << endl;
		}
	cout << "########################################\n";
}

int TinhTuoi(CAUTHU x)
{
	return 2020 - x.NgaySinh.nam;
}

int TuoiNhoNhat(CAUTHU a[], int n)
{
	CAUTHU lc = a[0];
	for (int i = 0; i < n; i++)
		if (TinhTuoi(a[i]) < TinhTuoi(lc))
			lc = a[i];
	return TinhTuoi(lc);
}

void SapGiamNgaySinh(CAUTHU a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].NgaySinh.ng < a[j].NgaySinh.ng)
				swap(a[i], a[j]);
}