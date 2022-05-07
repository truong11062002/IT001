#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang2m(int);
int TimGiaTri(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	cout << "\nGia tri dau tien co dang 2m: " << kq;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i] << " ";
	}
}
bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t = t / 2;
	}
	return flag;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang2m(a[i]))
			return a[i];
	return 0;
}