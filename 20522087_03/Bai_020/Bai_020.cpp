#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nGia tri cuc tieu trong mang: " << endl;
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
void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] < a[1])
		cout << a[0] << " ";
	for (int i = 1; i <= n-2 ; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i] << " ";
	}
	if (a[n - 1] < a[n - 2])
		cout << a[n - 1] << " ";
}
