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
void Xuat(PHANSO[], int);

void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);

int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[][100], int, int);

PHANSO NhoNhat(PHANSO[][100], int, int);
int DemNhoNhat(PHANSO[][100], int, int);

int ktAm(PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);
void SapTang(PHANSO[][100], int, int);
int ktToiGian(PHANSO);
int UCLN(int, int);
void SapTang(PHANSO[], int);
void LietKe(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;
	int baitap;
	do {
		Nhap(b, k, l);
		Xuat(b, k, l);
		do {
			cout << "\nNhap bai tap can giai(245---->249): ";
			cin >> baitap;
		} while (baitap < 245 || baitap > 249);
		switch (baitap)
		{
		case 245:
		{
			PHANSO kq = LonNhat(b, k, l);
			cout << "Phan so lon nhat: ";
			Xuat(kq);
		}break;
		case 246:
		{
			int kq = DemNhoNhat(b, k, l);
			cout << "Dem so luong nho nhat: " << kq;
		}break;
		case 247:
		{
			PHANSO kq = AmLonNhat(b, k, l);
			cout << "Am lon nhat: ";
			Xuat(kq);
		}break;
		case 248:
		{
			cout << "Sap tang ma tran: ";
			SapTang(b, k, l);
			Xuat(b, k, l);
		}break;
		case 249:
		{
			cout << "Liet ke cac mang: ";
			LietKe(b, k, l);
		}break;
		default:
			break;
		}
	} while (baitap >= 245 || baitap <= 249);
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
void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
}
void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 1)
				lc = a[i][j];
	return lc;
}
PHANSO NhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == -1)
				lc = a[i][j];
	return lc;
}
int DemNhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = NhoNhat(a, m, n);
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 0)
				dem++;
	return dem;
}
int ktAm(PHANSO x)
{
	if ((x.tu * x.mau) < 0)
		return 1;
	return 0;
}
PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktAm(a[i][i]))
				if (SoSanh(lc, temp) == 0 || SoSanh(a[i][j], lc) == 1)
					lc = a[i][j];
	return lc;
}

void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = i + 1; j <= m * n - 1; j++)
			if (SoSanh(a[i / n][i % n], a[j / n][j % n]) == 1)
				swap(a[i / n][i % n], a[j / n][j % n]);
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
int ktToiGian(PHANSO x)
{
	if (UCLN(x.tu, x.mau) == 1)
		return 1;
	return 0;
}
void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (SoSanh(a[i], a[j]) == 1)
				swap(a[i], a[j]);
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
	SapTang(b, k);
	Xuat(b, k);
}
