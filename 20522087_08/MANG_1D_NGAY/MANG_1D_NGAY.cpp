#include<iostream>
using namespace std;
struct ngay
{
	int ng;
	int th;
	int nam;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);
int ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);

int SoThuTu(NGAY);
int KhoangCach(NGAY, NGAY);
void GanNhauNhat(NGAY[], int, NGAY&, NGAY&);
void XaNhauNhat(NGAY[], int, NGAY&, NGAY&);
int main()
{
	NGAY b[1000];
	int k;
	int baitap;
	do {
		Nhap(b, k);
		Xuat(b, k);
		do
		{
			cout << "\nNhap bai tap can giai(232---->233): ";
			cin >> baitap;
		} while (baitap < 232 || baitap >233);
		switch (baitap)
		{
		case 232:
		{
			NGAY x, y;
			cout << "Tim hai 2 ngay gan nhau nhat: \n";
			GanNhauNhat(b, k, x, y);
		}break;
		case 233:
		{
			NGAY x, y;
			cout << "Tim hai 2 ngay xa nhau nhat: \n";
			XaNhauNhat(b, k, x, y);
		}break;
		default:
			break;
		}
	} while (baitap >= 232 || baitap <= 233);
	return 1;
}
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nam;
}
void Xuat(NGAY x)
{
	cout << "Ngay/Thang/Nam: " << x.ng << "/" << x.th << "/" << x.nam << endl;
}
void Nhap(NGAY a[], int& n)
{
	cout << "Nhap so luong ngay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay A[" << i << "]: \n";
		Nhap(a[i]);
	}
}
void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return 1;
	if (x.nam % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;

	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.nam };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}
int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}
int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}

void GanNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n-2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
	Xuat(x);
	Xuat(y);
}
void XaNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) > KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
	Xuat(x);
	Xuat(y);
}
