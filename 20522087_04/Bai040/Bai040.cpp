#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TichCot(int[][100], int, int, int);
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

	int kq = TichCot(b, k, l, c);
	cout << "Tich so le tren mot cot: \n" << kq;
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

int TichCot(int a[][100], int m, int n, int c)
{
	int T = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 != 0)
			T = T * a[i][c];
	return T;
}
