#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float*, int&);
void Nhapxy(float&, float&);
void Xuat(float*, int);
void LietKe(float*, int, float, float);
int main()
{
	float* a;
	int n;
	float x, y;
	cout << "Nhap n: ";
	cin >> n;
	a = new float[n];
	Nhap(a, n);
	Xuat(a, n);
	Nhapxy(x, y);
	LietKe(a, n, x, y);
	delete[]a;
	return 1;
}
void Nhap(float* a, int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
}
void Nhapxy(float& x, float& y)
{
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;
}

void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(11);
}
void LietKe(float* a, int n, float x, float y)
{
	cout << "\nLiet ke cac gia tri so thuc trong mang: \n";
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i] << setw(10);
}

