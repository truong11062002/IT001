#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktHoanThien(int);
int TonTaiHT(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Kiem tra ton tai";
	int kq = TonTaiHT(b, k, l);
	if (kq == 1)
		cout << "\nTon tai HT ";
	else
		cout << "\nKhong ton tai HT ";
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
bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0 && k != 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int TonTaiHT(int a[][100], int m, int n)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktHoanThien(a[i][j]))
				flag = 1;
	return flag;
}
