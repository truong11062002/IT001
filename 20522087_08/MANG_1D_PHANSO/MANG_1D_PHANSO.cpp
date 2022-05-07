#include<iostream>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
// Bai200
int DemDuong(PHANSO[], int);
//Bai201
PHANSO LonNhat(PHANSO[], int);
//Bai202
int ViTriNhoNhat(PHANSO[], int);
//Bai203
PHANSO DuongDau(PHANSO[], int);
//Bao204
PHANSO DuongNhoNhat(PHANSO[], int);
int ktDuong(PHANSO);
int ktAm(PHANSO);
int SoSanh(PHANSO, PHANSO);
//Bai205
int TimViTri(PHANSO[], int);
//Bai206
void SapTang(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;
	PHANSO P;
	int baitap;
	do {
		Nhap(b, k);
		Xuat(b, k);
		do
		{
			cout << "\nNhap bai tap can giai(200---->206): ";
			cin >> baitap;
		} while (baitap < 200 || baitap >206);
		switch (baitap)
		{
		case 200:
		{
			int kq = DemDuong(b, k);
			cout << "Dem phan so duong: " << kq;
		}break;
		case 201:
		{
			PHANSO kq = LonNhat(b, k);
			cout << "Phan so lon nhat la: ";
			Xuat(kq);
		}break;
		case 202:
		{
			int kq = ViTriNhoNhat(b, k);
			cout << "Vi tri nho nhat: " << kq;
		}break;
		case 203:
		{
			PHANSO kq = DuongDau(b, k);
			cout << "Duong dau la: ";
			Xuat(kq);
		}break;
		case 204:
		{
			PHANSO kq = DuongNhoNhat(b, k);
			cout << "Duong nho nhat la: ";
			Xuat(kq);
		}break;
		case 205:
		{
			int kq = TimViTri(b, k);
			cout << "Vi tri am lon nhat: " << kq;
		}break;
		case 206:
		{
			cout << "Sap xep mang tang dan: ";
			SapTang(b, k);
			Xuat(b, k);
		}break;
		default:
			break;
		}
	} while (baitap >= 200 || baitap <= 206);

	return 1;
}
void Nhap(PHANSO& P)
{
	cout << "\nNhap tu: ";
	cin >> P.tu;
	cout << "Nhap mau: ";
	cin >> P.mau;
}
void Xuat(PHANSO P)
{
	cout << "\nPhan so la: ";
	cout << P.tu << "/" << P.mau;
	cout << endl;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "\nNhap so luong mang phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		srand(time(nullptr));
		for (int i = 0; i < n; i++)
		{
			a[i].tu = rand() % (200 + 1) - 100;
			a[i].mau = rand() % (200 + 1) - 100;
		}
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].tu * a[i].mau > 0)
			dem++;
	}
	return dem;
}
PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if ((float)lc.tu / lc.mau < (float)a[i].tu / a[i].mau)
			lc = a[i];
	return lc;
}
int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if ((float)a[i].tu / a[i].mau < (float)a[lc].tu / a[lc].mau)
			lc = i;
	return lc;
}
PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].tu * a[i].mau > 0)
			return a[i];
	PHANSO lc = { 0,1 };
	return lc;
}

int ktDuong(PHANSO A)
{
	if ((float)A.tu / A.mau > 0)
		return 1;
	return 0;
}
int SoSanh(PHANSO A, PHANSO B)
{
	if ((float)A.tu / B.mau > (float)B.tu / B.mau)
		return 1;
	return 0;
}


PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == 1)
		lc = a[n - 1];
	return lc;
}
int ktAm(PHANSO A)
{
	if ((float)A.tu / A.mau < 0)
		return 1;
	return 0;
}

int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (ktAm(a[n - 1]) == 0)
		return lc;
	if (ktAm(a[lc]) == 0)
		return n - 1;
	if (SoSanh(a[n - 1], a[lc]) == -1)
		return lc;
}
void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (SoSanh(a[i], a[j]) == 1)
				swap(a[i], a[j]);
}