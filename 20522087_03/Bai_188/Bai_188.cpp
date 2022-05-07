#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongCon(float[], int, int, int);
void ConLonNhat(float[], int, int&, int&);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int vtd, vtc;
	cout << "\nMang con co tong lon nhat: ";
	ConLonNhat(b, k, vtd, vtc);
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

float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + l];
	return s;
}

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
}
