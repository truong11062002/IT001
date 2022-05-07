#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
int main()
{
	float b[100];
	int k, vtd, vtc;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nDay con duong dai nhat: ";
	DuongDaiNhat(b, k, vtd, vtc);
	if (vtd == -1)
		cout << "Khong co day";
	else
		for (int i = vtd; i <= vtc; i++)
			cout << b[i] << " ";
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << fixed << setprecision(3) << a[i] << " ";
	}
}
bool ktCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			return false;
	return true;
}
void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1; l--)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == true)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}
