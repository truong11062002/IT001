#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktGiam(int[][100], int, int, int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac dong co gia tri giam: ";
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

int ktGiam(int a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n - 1; j++)
	{
		if (a[d][j] < a[d][j + 1])
			flag = 0;
	}
	return flag;
}

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktGiam(a, m, n, i) == 1)
			cout << setw(6) << i;
}
