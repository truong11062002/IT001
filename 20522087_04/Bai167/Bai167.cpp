#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktCon(float[][100], int, int, int, int);
void ConDau(float[][100], int, int, int&, int&);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nKet qua: " << endl;
	int vtd, vtc;
	ConDau(b, k, l, vtd, vtc);
	if (vtd == -1 && vtc == -1)
		cout << "Khong co";
	else
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << b[vtd + i][vtc + j] << " ";
			cout << endl;
		}
	return 0;
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
			a[i][j] = (rand() / (RAND_MAX / (100 - (-100.0))));
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

bool ktCon(float a[][100], int m, int, int vtd, int vtc)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] <= 0)
				return false;
	return true;
}

void ConDau(float a[][100], int m, int n, int& vtd, int& vtc)
{
	for (vtd = 0; vtd < m - 2; vtd++)
		for (vtc = 0; vtc < n - 2; vtc++)
			if (ktCon(a, m, n, vtd, vtc) == true)
				return;
	vtd = vtc = -1;
}