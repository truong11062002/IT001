#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Xuat(int*, int);
bool ktDang3m(int);
void LietKe(int*, int);
int Dem(int*, int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nLiet ke cac so dang 3m: \n";
	int kq = Dem(a, n);
	if (kq > 0)
		LietKe(a, n);
	else
		cout << kq;
	delete[]a;
	return 1;
}
void Nhap(int* a, int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(11);
}

bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t = t / 3;
	}
	return flag;
}
int Dem(int* a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
			dem++;
	return dem;
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
			cout << a[i] << setw(8);
}