#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongChan(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = TongChan(b, k, l);
	cout << "Tong cac phan tu chan trong ma tran: \n" << kq;
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
int TongChan(int a[][100], int m, int n)
{
	int s = 0;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				s = s + a[i][j];
		}
	return s;
}
