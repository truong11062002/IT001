#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktToanle(int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Cac phan tu toan le tren bien: \n";
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
int ktToanle(int k)
{
	int flag = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return 3;
		t = t / 10;
	}
	if (flag == 1)
		return 2;
	else
		return 3;
}

void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (ktToanle(a[0][j]) == 2)
			cout << a[0][j] << " ";
		if (ktToanle(a[m - 1][j]) == 2)
			cout << a[m - 1][j] << " ";
	}
	for (int i = 1; i < m - 1; i++)
	{
		if (ktToanle(a[i][0]) == 2)
			cout << a[i][0] << " ";
		if (ktToanle(a[i][n - 1]) == 2)
			cout << a[i][n - 1] << " ";
	}
}
