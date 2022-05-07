#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "\nLiet ke gia tri chinh phuong: ";
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
bool ktChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i = i + 1)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]))
				cout << setw(4) << a[i][j];
}
