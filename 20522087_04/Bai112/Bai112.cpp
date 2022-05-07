#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac dong co gia tri duong am va 0 : ";
	LietKe(b, k, l);
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
bool ktDong(float a[][100], int m, int n, int d)
{
	bool flag = false;
	int kiemtra[3] = { 0,0,0 };
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
			kiemtra[0] = 1;
		if (a[d][j] < 0)
			kiemtra[1] = 1;
		if (a[d][j] == 0)
			kiemtra[2] = 1;
	}
	if (kiemtra[0] + kiemtra[1] + kiemtra[2] == 3)
	{
		flag = true;
	}
	return flag;
}
void LietKe(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDong(a, m, n, i))
			cout << setw(6) << i;
	}
}
