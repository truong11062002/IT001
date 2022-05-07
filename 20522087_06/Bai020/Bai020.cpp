#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float*, int&);
void Xuat(float*, int);
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
void LietKe(float* a, int n)
{
	cout << "\nLiet ke cac gia tri cuc tieu: \n";
	if (n == 1)
		return;
	if (a[0] < a[1])
		cout << a[0] << " ";
	for (int i = 1; i < n - 1; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i] << " ";
	if (a[n - 1] < a[n - 2])
		cout << a[n - 1] << " ";
}

