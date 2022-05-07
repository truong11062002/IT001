#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktnt(int);
int DemDong(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac dong co nhieu so nguyen to nhat: ";
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
bool ktnt(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (abs(k) % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int DemDong(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktnt(a[d][j]))
			dem++;
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	return lc;
}
void LietKe(int a[][100], int m, int n)
{
	int lc = DemLonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == lc)
		{
			cout << setw(8) << i;
		}
}