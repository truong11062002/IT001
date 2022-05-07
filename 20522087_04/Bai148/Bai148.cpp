#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void ThemDong(int[][100], int&, int, int);

int main()
{
	int b[100][100];
	int k, l, d;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);

	cout << "\nNhap vi tri dong muon them vao : ";
	cin >> d;
	while (d > k - 1)
	{
		cout << "\nVui long nhap vi tri dong nam trong pham vi ma tran!!!";
		cout << "\nNhap vi tri dong muon them vao : ";
		cin >> d;
	}

	ThemDong(b, k, l, d);
	cout << "\nMa tran sau khi duoc them: \n";
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

void ThemDong(int a[][100], int& m, int n, int d)
{
	if (d >= 0 && d < m)
	{
		for (int i = m; i > d; i--)
			for (int j = 0; j < n; j++)
				a[i][j] = a[i - 1][j];
		m++;
		for (int j = 0; j < n; j++)
			a[d][j] = 1;
	}
}