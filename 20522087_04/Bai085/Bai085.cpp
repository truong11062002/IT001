#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ChinhPhuongDau(int[][100], int, int);
int ChinhPhuongLonNhat(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = ChinhPhuongLonNhat(b, k, l);
	cout << "Gia tri chinh phuong lon nhat trong ma tran: \n" << kq;
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

int ChinhPhuongDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]))
				return a[i][j];
}
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	int lc = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc < a[i][j] && ktChinhPhuong(a[i][j]))
				lc = a[i][j];
	return lc;
}

