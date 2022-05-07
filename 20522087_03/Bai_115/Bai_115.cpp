#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(float[], int, float&, float&);
int main()
{
	float b[100];
	int k;
	float z, t;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac cap co gia tri gan nhau nhat trong mang: ";
	GanNhat(b, k, z, t);
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
void GanNhat(float a[], int n, float& x, float& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j] < abs(x - y)))
			{
				x = a[i];
				y = a[j];
			}
	cout << "(" << x << "," << y << ")";
}
