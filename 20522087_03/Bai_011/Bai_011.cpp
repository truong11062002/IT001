#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang3m(int);
void LietKe(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac mang co dang 3m: " << endl;
	LietKe(b, k);
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
		cout << setw(6) << a[i] << " ";
	}
}

bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t > 1; t = t / 3)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i])==true)
			cout << a[i] << " ";
}