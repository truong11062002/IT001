#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);

float kcGoc(DIEM);
float KhoangCachGoc(DUONGTRON);
DUONGTRON GanGocNhat(DUONGTRON[], int);

int ktQuaGoc(DUONGTRON);
int ktTonTai(DUONGTRON[], int);

float KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);

int ktTiepXucOy(DUONGTRON);
int KiemTra(DUONGTRON[], int);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
int ktDoiMotCatNhau(DUONGTRON[], int);

int LietKe(DUONGTRON[], int);
int main()
{
	DUONGTRON b[1000];
	int k;
	int baitap;
	do {
		Nhap(b, k);
		Xuat(b, k);
		do
		{
			cout << "\nNhap bai tap can giai(214---->221): ";
			cin >> baitap;
		} while (baitap < 214 || baitap >221);
		switch (baitap)
		{
		case 214:
		{
			cout << "Duong tron gan goc toa do nhat: ";
			DUONGTRON kq = GanGocNhat(b, k);
			Xuat(kq);
		}break;
		case 215:
		{
			cout << "Kiem tra qua goc toa do: ";
			int kq = ktTonTai(b, k);
			if (kq == 1)
				cout << "Duong tron qua goc toa do";
			else
				cout << "Duong tron khong qua goc toa do";
		}break;
		case 216:
		{
			cout << "Tim duong tron gan Ox: ";
			DUONGTRON kq = GanOxNhat(b, k);
			Xuat(kq);
		}break;
		case 217:
		{
			cout << "Kiem tra tiep xuc truc tung: ";
			int kq = KiemTra(b, k);
			if (kq == 1)
				cout << "Tiep xuc tung";
			else
				cout << "Khong tiep xuc tung";
		}break;
		case 218:
		{
			cout << "Kiem tra doi mot cat nhau: ";
			int kq = ktDoiMotCatNhau(b, k);
			if (kq == 1)
				cout << "2 Duong tron cat nhau";
			else
				cout << "2 Duong tron khong cat nhau";
		}break;
		case 219:
		{
			cout << "Liet ke cap duong tron tiep xuc nhau: ";
			int kq = LietKe(b, k);
			if (kq == 1)
				LietKe(b, k);
			else
				cout << "Khong co duong tron tiep xuc nhau";
		}break;
		default:
			break;
		}
	} while (baitap >= 214 || baitap <= 221);
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
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh: ";
	cout << c.R;
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "\nNhap so luong duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i].I.x = -100 + rand() / (RAND_MAX / 200.0);
		a[i].I.y = -100 + rand() / (RAND_MAX / 200.0);
		a[i].R = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

float kcGoc(DIEM I)
{
	return sqrt(I.x * I.x + I.y * I.y);
}

float KhoangCachGoc(DUONGTRON c)
{
	float kc = kcGoc(c.I);
	return abs(kc - c.R);
}
DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 1; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}
int ktQuaGoc(DUONGTRON c)
{
	float kc = kcGoc(c.I);
	if (kc == c.R)
		return 1;
	return 0;
}
int ktTonTai(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]) == 1)
			return 1;
	return 0;
}
float KhoangCachOx(DUONGTRON c)
{
	if (abs(c.I.y) < c.R)
		return 0;
	return abs(abs(c.I.y) - c.R);
}
DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}
int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.R)
		return 1;
	return 0;
}
int KiemTra(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(a[i]) == 1)
			flag = 1;
	return flag;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc<(c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	return flag;
}
int LietKe(DUONGTRON a[] , int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=i+1;j<=n-1;j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4)
			{
				Xuat(a[i]);
				Xuat(a[j]);
				return 1;
			}
	return 0;
}


