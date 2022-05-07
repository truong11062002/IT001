#include<iostream>
using namespace std;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int ktSongSong(DUONGTHANG, DUONGTHANG);
int ktSongSong(DUONGTHANG[], int);

int ktCapSongSong(DUONGTHANG[], int);

int ktTrung(DUONGTHANG, DUONGTHANG);
int ktCapTrungNhau(DUONGTHANG[], int);

int ktThuoc(DUONGTHANG, DIEM);
int ktQuaDiem(DUONGTHANG[], int, DIEM);

float KhoangCach(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int, DIEM);

int ktCat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
int ktDongQui(DUONGTHANG[], int);
int main()
{
	DUONGTHANG b[1000];
	int k;
	int baitap;
	do {
		Nhap(b, k);
		Xuat(b, k);
		do
		{
			cout << "\nNhap bai tap can giai(224---->229): ";
			cin >> baitap;
			switch (baitap)
			{
			case 224:
			{
				cout << "Kiem tra song song";
				int kq = ktSongSong(b, k);
				if (kq == 1)
					cout << "Song song";
				else
					cout << "Khong song song";
			}break;
			case 225:
			{
				cout << "Kiem tra cap song song: ";
				int kq = ktCapSongSong(b, k);
				if (kq == 1)
					cout << "Co cap song song";
				else
					cout << "Khong co cap song song";
			}break;
			case 226:
			{
				cout << "Kiem tra cap trung nhau";
				int kq = ktCapTrungNhau(b, k);
				if (kq == 1)
					cout << "Co cap trung";
				else
					cout << "Khong co cap trung";
			}break;
			case 227:
			{
				cout << "Kiem tra co duong thang nao qua P khong: ";
				DIEM P;
				Nhap(P);
				int kq = ktQuaDiem(b, k, P);
				if (kq == 1)
					cout << "Co";
				else
					cout << "Khong";
			}break;
			case 228:
			{
				cout << "Tim duong thang gan diem P nhat: ";
				DIEM P;
				cout << "\nNhap P: ";
				Nhap(P);
				DUONGTHANG kq = GanDiemNhat(b, k, P);
				Xuat(kq);
			}break;
			case 229:
			{
				cout << "Kiem tra dong qui: \n";
				int kq = ktDongQui(b, k);
				if (kq == 1)
					cout << "Co";
				else
					cout << "Khong";
			}break;
			default:
				break;
			}
		} while (baitap < 224 || baitap >229);
	} while (baitap >= 224 && baitap <= 229);
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
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << d.a << "x+" << d.b << "y+" << d.c << endl;
}
void Nhap(DUONGTHANG a[], int& n)
{
	cout << "\nNhap so luong duong thang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i].a = -100 + rand() / (RAND_MAX / 200.0);
		a[i].b = -100 + rand() / (RAND_MAX / 200.0);
		a[i].c = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d2.b;
	if (D != 0 && Dx != 0)
		return 1;
	return 0;
}

int ktSongSong(DUONGTHANG a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (!ktSongSong(a[i], a[0]))
			flag = 0;
	return flag;
}
int ktCapSongSong(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 2; j++)
			if (ktSongSong(a[i], a[j]))
				flag = 1;
	return flag;
}
int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d2.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}
int ktCapTrungNhau(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktTrung(a[i], a[j]))
				flag = 1;
	return flag;
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}
int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], P))
			flag = 1;
	return flag;
}
float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
			lc = a[i];
	return lc;
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
int ktDongQui(DUONGTHANG a[], int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=i+1;j<=n-2;j++)
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
					if (k != i && k != j && ktThuoc(a[k], PP))
						return 1;
			}
	return 0;
}
