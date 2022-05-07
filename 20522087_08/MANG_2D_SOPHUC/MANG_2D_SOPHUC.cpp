#include <iostream>
#include <iomanip>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);
SOPHUC ThucAoDuongDau(SOPHUC[][100], int, int);
SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);
bool ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);
SOPHUC ThucLonNhat(SOPHUC[][100], int, int);
int main()
{
	SOPHUC b[100][100];
	int k, l;
	int baitap;
	do {
		Nhap(b, k, l);
		Xuat(b, k, l);
		do {
			cout << "\nNhap bai tap can giai(252---->255): ";
			cin >> baitap;
		} while (baitap < 252 || baitap > 255);
		switch (baitap)
		{
		case 252:
		{
			SOPHUC kq = ThucAoDuongDau(b, k, l);
			cout << "So phuc co thuc duong, ao duong dau tien trong ma tran: ";
			Xuat(kq);
		}break;
		case 253:
		{
			SOPHUC kq = ThucAoAmCuoi(b, k, l);
			cout << "So phuc co thuc am, ao am cuoi cung trong ma tran: ";
			Xuat(kq);
		}break;
		case 254:
		{
			int kq = DemDong(b, k, l);
			cout << "So dong chua so phuc co phan thuc va phan ao trai dau nhau: " << kq;
		}break;
		case 255:
		{
			SOPHUC kq = ThucLonNhat(b, k, l);
			cout << "So phuc co phan thuc lon nhat: ";
			Xuat(kq);
		}break;
		default:
			break;
		}
	} while (baitap >= 252 || baitap <=255);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j].Thuc = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
			a[i][j].Ao = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			Xuat(a[i][j]);
			cout << endl;
		}
}

//Bai252
SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
				return a[i][j];
	return { 0,0 };
}

//Bai253
SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		for (int j = n - 1; j >= 0; j--)
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
				return a[i][j];
	return { 0,0 };
}

//Bai254
bool ktDong(SOPHUC a[][100], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao < 0)
			return true;
	return false;
}

int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDong(a, m, n, i))
			dem++;
	return dem;
}

//Bai255
SOPHUC ThucLonNhat(SOPHUC a[][100], int m, int n)
{
	SOPHUC lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > lc.Thuc)
				lc = a[i][j];
	return lc;
}