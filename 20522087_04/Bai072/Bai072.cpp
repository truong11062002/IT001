#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool DemPhanBiet(float[][100], int, int, float);
int DemGiaTri(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nKet qua: " << DemGiaTri(b, k, l);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	srand(time(NULL));
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
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

bool DemPhanBiet(float a[][100], int m, int n, float x)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if (a[i][j] == x)
				return false;
	return true;
}

int DemGiaTri(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (DemPhanBiet(a, i, j, a[i][j]) == true)
				dem++;
	return dem;
}