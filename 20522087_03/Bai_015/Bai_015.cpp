#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Nhapxy(float &, float &);
void Xuat(float[], int);
void LietKe(float[], int, float, float);
int main()
{
	float b[100];
	int k;
	float x, y;
	Nhapxy(x, y);
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nCac so thuoc thuoc doan [ " << x << y << " ]: ";
	LietKe(b, k, x, y);
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
void Nhapxy(float &x, float &y)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
void LietKe(float a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i] << " ";
}
