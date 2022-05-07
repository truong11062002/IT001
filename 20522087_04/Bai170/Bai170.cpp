#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktCon(int[][100], int, int,int[][100], int, int);
int main()
{
	int b[100][100], d[100][100];
	int k, l,h,e;

	cout << "Nhap ma tran A: \n";
	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Nhap ma tran B: \n";
	Nhap(d, h, e);
	Xuat(d, h, e);

	cout << "Kiem tra mang A co la con B hay khong: \n";
	int kq = ktCon(b, k, l, d, h, e);
	if (kq == 1)
		cout << "A la con B";
	else
		cout << "A khong la con cua B";
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
int ktCon(int a[][100], int m, int n, int b[][100], int k, int l)
{
	if (m > k || n > l)
		return 0;
	int flag = 0;
	for(int d=0;d<=k-m;d++)
		for (int c = 0; c <= l - n; c++)
		{
			int co = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (a[i][j] != b[d + i][c + j])
						co = 0;
			if (co == 1)
				flag = 1;
		}
	return flag;
}
