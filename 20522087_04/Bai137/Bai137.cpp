#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktnt(int);
void HoanVi(int&, int&);
void XuatNguyenToTang(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Ket qua sap xep: \n";
	XuatNguyenToTang(b, k, l);
	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(7) << a[i][j];
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

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void XuatNguyenToTang(int a[][100], int m, int n)
{
	int b[100];
	int k;
	int i, j;

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (ktnt(a[i][j]))
				b[k++] = a[i][j];
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);

	for (i = 0; i < k; i++)
		cout << setw(6) << b[i];
}