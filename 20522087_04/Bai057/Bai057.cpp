#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktToanChan(int);
int DemToanChan(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	int kq = DemToanChan(b, k, l);
	cout << "Dem so luong co chu so toan chan: \n" << kq;
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
bool ktToanChan(int k)
{
	bool flag = true;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			flag = false;
			return flag;
		}
		t = t / 10;
	}
	return flag;
}
int DemToanChan(int a[][100], int m, int n)
{
	int dem = 0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(ktToanChan(a[i][j]))
				dem++;
	return dem;
}