#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
//Bai191
int DemDiem(DIEM[], int);
//Bai192
int TungLonNhat(DIEM[], int);
//Bai193
float KhoangCachGoc(DIEM);
DIEM GanGocNhat(DIEM[], int);
//Bai194
float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);
//Bai195
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiem2(DIEM[], int);

int main()
{
	DIEM b[100];
	int k;
	DIEM P;
	int baitap;
	do
	{
		Nhap(b, k);
		Xuat(b, k);
		do {
			cout << "\nNhap bai tap can giai(191---->197): ";
			cin >> baitap;
		} while (baitap < 191 || baitap > 197);
		switch (baitap)
		{
		case 191:
		{
			int kq = DemDiem(b, k);
			cout << "\nSo luong phan tu co hoanh do duong: " << kq;
		}break;
		case 192:
		{
			int kq = TungLonNhat(b, k);
			cout << "\nTung lon nhat la: " << kq;
		}break;
		case 193:
		{
			cout << "\nDiem gan goc nhat: ";
			Xuat(GanGocNhat(b, k));
		}break;
		case 194:
		{
			DIEM M, N;
			cout << "\nHai diem gan nhau nhat: ";
			GanNhauNhat(b, k, M, N);
			cout << "\nToa do 2 diem: ";
			Xuat(M);
			Xuat(N);
		}break;
		case 195:
		{
			int kq = DemDiem2(b, k);
			cout << "So luong diem khong trung: " << kq;
		}break;
		default:
			break;
		}
	} while (baitap >= 191 && baitap <= 197);
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")" << endl;
}

void Nhap(DIEM a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i].x = rand() % (200 + 1) - 100;
		a[i].y = rand() % (200 + 1) - 100;
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].x > 0)
			dem++;
	return dem;
}
int TungLonNhat(DIEM a[], int n)
{
	int lc = a[0].y;
	for (int i = 0; i < n; i++)
		if (a[i].y > lc)
			lc = a[i].y;
	return lc;
}
float KhoangCachGoc(DIEM P)
{
	return (P.x * P.x + P.y * P.y);
}
DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	if (n == 0)
	{
		P = a[0];
		Q = a[1];
		return;
	}
	GanNhauNhat(a, n - 1, P, Q);
	for (int i = 0; i <= n - 2; i++)
		if (KhoangCach(a[n - 1], a[i]) < KhoangCach(P, Q))
		{
			P = a[n - 1];
			Q = a[i];
		}
	return;
}
int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktTrung(a[i], P) == 1)
			dem++;
	return dem;
}
int DemDiem2(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem;
}
