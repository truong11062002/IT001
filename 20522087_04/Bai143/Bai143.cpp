#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XoaCot(float[][100], int, int&, int);

int main()
{
	float b[100][100];
	int k, l, c;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "\nNhap cot muon xoa : ";
	cin >> c;
	while (c > l - 1)
	{
		cout << "\nVui long nhap so cot nam trong pham vi ma tran!!!";
		cout << "\nNhap cot muon xoa: ";
		cin >> c;
	}

	XoaCot(b, k, l, c);
	cout << "\nMa tran sau khi xoa cot " << c << " la: \n";
	Xuat(b, k, l);

	return 1;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100 - (-100.0))));
	}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

void XoaCot(float a[][100], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
		for (int j = c; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;
}