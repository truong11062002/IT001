#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&,float &);
void Xuat(float[], int);
float XaNhat(float[], int, float);
int main()
{
	float b[100];
	int k;
	float l;
	Nhap(b, k,l);
	Xuat(b, k);

	float kq = XaNhat(b, k,l);
	cout << "\nGia tri xa x nhat: " << kq;
	return 1;
}
void Nhap(float a[], int& n,float &x)
{
	cout << "Nhap x: ";
	cin >> x;
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
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	return lc;
}