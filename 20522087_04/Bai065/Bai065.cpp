#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktnt(int);
bool ktDauTien(int);
int DemNguyenTo(int[][100], int, int, int);
int main()
{
	int b[100][100];
	int k, l, c = 0;

	Nhap(b, k, l);
	Xuat(b, k, l);
	do
	{
		cout << "Nhap cot thu d: \n";
		cin >> c;
	} while (c > l - 1);

	int kq = DemNguyenTo(b, k, l, c);
	cout << "Dem so nguyen to co chu so dau tien chan tren cot: \n" << kq;
	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (201) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}
bool ktnt(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (abs(k) % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
bool ktDauTien(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt = dt / 10;
	if (dt % 2 == 0)
		return true;
	return false;
}

int DemNguyenTo(int a[][100], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktnt(a[i][c]) == true && ktDauTien(a[i][c]) == true)
			dem++;
	return dem;
}
