#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang5m(int);
int TongBien(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = TongBien(b, k, l);
	cout << "Tong dang 5m tren bien: \n" << kq;
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
bool ktDang5m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	int t = abs(k);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}
int TongBien(int a[][100], int m, int n)
{
	int s = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktDang5m(a[0][j]) == true)
			s = s + a[0][j];
		if (ktDang5m(a[m - 1][j]) == true)
			s = s + a[m - 1][j];
	}
	for (int i = 1; i < m - 1; i++)
	{
		if (ktDang5m(a[i][0]) == true)
			s = s + a[i][0];
		if (ktDang5m(a[i][n - 1]) == true)
			s = s + a[i][n - 1];
	}
	return s;
}
