#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float*, int&);
void Xuat(float*, int);
float LonNhat(float*, int);
void LietKe(float*, int);
int main()
{
	float* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new float[n];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	delete[]a;
	return 1;
}
void Nhap(float* a, int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
}
void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(11);
}
float LonNhat(float* a, int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[lc])
			lc = i;
	return a[lc];
}

void LietKe(float* a, int n)
{
	float lc = LonNhat(a, n);
	cout << "\nLiet ke cac vi tri lon nhat: \n";
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << i << setw(6);
}

