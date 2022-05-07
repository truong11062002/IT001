#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
int TongCot(int[][100], int, int, int);
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

	int kq = TongCot(b, k, l, c);
	cout << "Tong so dang 2m tren mot cot: \n" << kq;
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
bool ktDang2m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	int t = abs(k);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t = t / 2;
	}
	return flag;
}


int TongCot(int a[][100], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (ktDang2m(a[i][c]))
			s = s + a[i][c];
	return s;
}
