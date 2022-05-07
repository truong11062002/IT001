#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float LonNhat(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);
int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);

	cout << "Liet ke cac dong co gia tri lon nhat trong ma tran: \n";
	LietKe(b, k, l);
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
float LonNhat(float a[][100], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > lc)
				lc = a[i][j];
		}
	return lc;
}
void LietKe(float a[][100], int m, int n)
{
	float max = LonNhat(a, m, n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if (a[i][j] == max)
			{
				cout << "\nDong " << i << " Chua gia tri max ";
				for (int j = 0; j < n; j++)
					cout << setw(8) << a[i][j];
			}	
}
