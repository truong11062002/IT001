#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int DemChinhPhuongBien(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = DemChinhPhuongBien(b, k, l);
	cout << "So luong phan tu chinh phuong tren bien: \n" << kq;
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
bool ktChinhPhuong(int k)
{
	for (int i = 1; i * i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}
int DemChinhPhuongBien(int a[][100], int m, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[0][j]))
			dem++;
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			dem++;
	for (int i = 1; i < m - 1; i++)
		if (ktChinhPhuong(a[i][0]))
			dem++;
	for (int i = 1; i < m - 1; i++)
		if (ktChinhPhuong(a[i][n - 1]))
			dem++;
	return dem;
}
