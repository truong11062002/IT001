#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCon(float[][100], int, int, int, int);
void TimCon(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Ket qua: " << endl;
	TimCon(b, k, l);
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

float TongCon(float a[][100], int vtd, int vtc, int ktd, int ktc)
{
	float s = 0;
	for (int i = 0; i < ktd; i++)
		for (int j = 0; j < ktc; j++)
			s = s + a[i + vtd][j + vtc];
	return s;
}

void TimCon(float a[][100], int m, int n)
{
	float lc = TongCon(a, 0, 0, 1, 1);
	int vtd = 0; //vi tri dong Diem Dau
	int vtc = 0; //vị tri cot Diem Dau
	int ktd = 1; //kich thuoc dong cua Con
	int ktc = 1; //kich thuoc cot cua Con
	for (int h = 1; h <= m; h++)  //Chay kich thuoc dong
		for (int l = 1; l <= n; l++) //chay kich thuoc cot
			for (int i = 0; i <= m - h; i++)  //toa do dong
				for (int j = 0; j <= n - l; j++)  //toa do cot
					if (TongCon(a, i, j, h, l) > lc)       //Cap nhat toa do va kich thuoc Con moi
					{
						vtd = i;
						vtc = j;
						ktd = h;
						ktc = l;
						lc = TongCon(a, i, j, h, l);
					}
	for (int i = vtd; i < vtd + ktd; i++)
	{
		for (int j = vtc; j < vtc + ktc; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

}