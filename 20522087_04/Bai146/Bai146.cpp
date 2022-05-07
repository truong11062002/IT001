#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void XoaDong(int[][100], int&, int, int);
void XoaDong(int[][100], int&, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);

	XoaDong(b, k, l);
	cout << "\nMa tran sau khi xoa cac dong toan so chan: \n";
	Xuat(b, k, l);
	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(7) << a[i][j];
		cout << endl;
	}
}

int ktDong(int a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 != 0)
			flag = 0;
	return flag;
}

void XoaDong(int a[][100], int& m, int n, int d)
{
	for (int i = d; i < m - 1; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = a[i + 1][j];
	m--;
}

void XoaDong(int a[][100], int& m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktDong(a, m, n, i) == 1)
				XoaDong(a, m, n, i);
}