#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
int TongDong(int[][100], int, int, int);
int main()
{
	int b[100][100];
	int k, l, d = 0;

	Nhap(b, k, l, d);
	Xuat(b, k, l);

	int kq = TongDong(b, k, l, d);
	cout << "Tong so nguyen to tren mot dong: \n" << kq;
	return 1;
}

void Nhap(int a[][100], int& m, int& n, int& d)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	do
	{
		cout << "Nhap dong thu d: \n";
		cin >> d;
	} while (d > m-1);
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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (abs(k) % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int TongDong(int a[][100], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[d][j]))
			s = s + a[d][j];
	return s;
}
