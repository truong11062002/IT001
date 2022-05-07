#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
void LietKe(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nVi tri co gia tri lon nhat cua mang: " << endl;
	LietKe(b, k);
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
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
float LonNhat(float a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[lc])
			lc = i;
	return a[lc];
}
void LietKe(float a[], int n)
{
	float lc = LonNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << i << " ";
}
