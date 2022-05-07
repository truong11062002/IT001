#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCucTieu(float[][100], int, int, int, int);
float TongCucTieu(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	float kq = TongCucTieu(b, k, l);
	cout << "Tong gia tri cuc tieu: \n" << kq;
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
int ktCucTieu(float a[][100], int m, int n, int d, int c)
{
	int flag = 1;
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int k = 0; k < 8; k++)
		if (di[k] + d >= 0 && di[k] + d < m && dj[k] + c >= 0 && dj[k] + c < n && a[d][c] > a[d + di[k]][c + dj[k]])
			flag = 0;
	return flag;
}

float TongCucTieu(float a[][100], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j) == 1)
				s = s + a[i][j];
	return s;
}

