#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDuongDau(float[], int);
float TongCon(float[], int, int, int);
bool ktCon(float[], int, int, int);
void DuongLonNhat(float[], int, int&, int&);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int vtd, vtc;
	cout << "\nDay toan duong co tong lon nhat trong mang: ";
	DuongLonNhat(b, k, vtd, vtc);
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
int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + l];
	return s;
}
bool ktCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			return false;
	return true;
}
void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}
	float smax = a[vt];
	vtd = vtc = vt;
	for(int l=1;l<=n;l++)
		for(int vt=0;vt <=n -l;vt++)
			if (ktCon(a, n, vt, l) == true && TongCon(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, n, vt, l);
			}
}
