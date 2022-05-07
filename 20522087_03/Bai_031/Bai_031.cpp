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

	cout << "\nCac cap (x,y): ";
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
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j && a[i]<= a[j] )
			{
				cout << "(" << a[i] << " , ";
				cout << a[j] << ")";
				cout << endl;
			}
}
