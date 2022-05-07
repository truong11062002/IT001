#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void ThemCot(int[][100], int, int&, int);

int main()
{
	int b[100][100];
	int k, l, c;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);

	cout << "\nNhap vi tri cot muon them vao : ";
	cin >> c;
	while (c > l - 1)
	{
		cout << "\nVui long nhap vi tri cot nam trong pham vi ma tran!!!";
		cout << "\nNhap vi tri cot muon them vao : ";
		cin >> c;
	}

	ThemCot(b, k, l, c);
	cout << "\nMa tran sau khi duoc them: \n";
	Xuat(b, k, l);
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

void ThemCot(int a[][100], int m, int& n, int c)
{
	if (c >= 0 && c < n)
	{
		for (int i = 0; i < m; i++)
			for (int j = n; j > c; j--)
				a[i][j] = a[i][j - 1];
		n++;
		for (int i = 0; i < m; i++)
			a[i][c] = 0;
	}
}