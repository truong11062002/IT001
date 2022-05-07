#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XepTang(float[], int);
void GanXoanOc(float[][100], int, int, float[], int);
void XoanOc(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nKet qua: " << endl;
	XoanOc(b, k, l);
	Xuat(b, k, l);
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

void XepTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void GanXoanOc(float a[][100], int m, int n, float b[], int k)
{
	int vtd = 0;  //vi tri dong
	int vtc = 0;  //vi tri cot
	int ktd = m - 1;  //kich thuoc dong
	int ktc = n - 1;  //kich thuoc cot
	int g = 0;
	while (g < k)
	{
		for (int i = vtc; i <= ktc; i++)
			a[vtd][i] = b[g++];
		if (g == k)
			continue;
		for (int i = vtd + 1; i <= ktd - 1; i++)
			a[i][ktc] = b[g++];
		if (g == k)
			continue;
		for (int i = ktc; i >= vtc; i--)
			a[ktd][i] = b[g++];
		if (g == k)
			continue;
		for (int i = ktd - 1; i >= vtd + 1; i--)
			a[i][vtc] = b[g++];
		vtd++;
		vtc++;
		ktd--;
		ktc--;
	}
}

void XoanOc(float a[][100], int m, int n)
{
	float b[500];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	XepTang(b, k);
	GanXoanOc(a, m, n, b, k);
}