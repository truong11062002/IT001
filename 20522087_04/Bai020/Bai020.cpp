#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang5m(int);
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
	cout << "Cac gia tri co dang 5m tren cot c: \n";
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

bool ktDang5m(int k)
{
	if (k < 5)
		return false;
	while (k > 1)
	{
		int du = k % 5;
		if (du != 0)
			return false;
		k = k / 5;
	}
}

void LietKe(int a[][100], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDang5m(a[i][c]) == true)
			cout << setw(4) << a[i][c];
	}
}
