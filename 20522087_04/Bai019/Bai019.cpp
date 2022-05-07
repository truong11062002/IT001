#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
void LietKe(int[][100], int, int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int c = 0;
	cout << "Nhap cot thu c: \n";
	cin >> c;
	cout << "Cac gia tri doi xung tren cot c: \n";
	LietKe(b, k, l, c);
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

bool ktDoiXung(int n)
{
	int dn = 0;
	for (int t = n; t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	if (dn == n)
		return true;
	return false;
}
void LietKe(int a[][100], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDoiXung(a[i][c]))
			cout << setw(4) << a[i][c];
	}
}
