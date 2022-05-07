#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XuatNguyen(int[][100], int, int);
int DemLanCan(float[][100], int, int, int, int);
void XayDung(float[][100], int, int, int[][100], int &, int &);
int main()
{
	float b[100][100];
	int d[100][100];
	int k, l, h, e;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << " Xay dung mang moi: \n";
	XayDung(b, k, l, d, h, e);
	XuatNguyen(d, h, e);
	return 1;
}

void Nhap(float a[][100], int& m, int& n)
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
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
		}
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
void XuatNguyen(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
int DemLanCan(float a[][100], int m, int n, int d, int c)
{
	int dem = 0;
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int k = 0; k < 8; k++)
		if (di[k] + d >= 0 && di[k] + d < m && dj[k] + c >= 0 && dj[k] + c < n && a[d + di[k]][c + dj[k]] > 0 && !(di==0 && dj==0))
			dem++;
	return dem;

}

void XayDung(float a[][100], int m, int n, int b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = DemLanCan(a, m, n, i, j);
}
