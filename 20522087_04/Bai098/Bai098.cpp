#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int LonNhatDong(int[][100], int, int, int);
// Kiem tra lon nhat tren mot dong
int NhoNhatCot(int[][100], int, int, int);
int DemGiaTri(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l ;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = DemGiaTri(b, k, l);
	cout << "Dem gia tri yen ngua: " << kq;
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
int LonNhatDong(int a[][100], int m, int n, int d)
{
	int lc = a[0][0];
	for (int j = 0; j < n; j++)
		if (lc < a[d][j])
			lc = a[d][j];
	return lc;
}
int NhoNhatCot(int a[][100], int m, int n, int c)
{
	int lc = a[0][0];
	for (int i = 0; i < m; i++)
		if (lc > a[i][c])
			lc = a[i][c];
	return lc;
}
int DemGiaTri(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int lnd = LonNhatDong(a, m, n, i);
			int nnc = NhoNhatCot(a, m, n, j);
			if (a[i][j] == lnd && a[i][j] == nnc)
				dem++;
		}
	return dem;
}

