#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ktCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac cot co chua chinh phuong: ";
	LietKe(b, k, l);
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

int ktCot(int a[][100], int m, int n, int c)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a[i][c]))
			flag = 1;
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(6) << j;
}
