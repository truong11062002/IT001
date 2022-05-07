#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void HoanViCot(float[][100], int, int, int, int);
int main()
{
	float b[100][100];
	int k, l, c1, c2;

	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Nhap c1: ";
	cin >> c1;
	cout << "Nhap c2: ";
	cin >> c2;
	cout << "Xay dung mang hoan vi 2 cot: \n";
	HoanViCot(b, k, l, c1, c2);
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

void HoanViCot(float a[][100], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
		HoanVi(a[i][c1], a[i][c2]);
}
