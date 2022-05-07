#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapCotTang(float[][100], int, int, int);
int main()
{
	float b[100][100];
	int k, l, c;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Nhap cot c: ";
	cin >> c;

	cout << "Hoan vi cot giam \n";
	SapCotTang(b, k, l, c);
	Xuat(b, k, l);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapCotTang(float a[][100], int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}