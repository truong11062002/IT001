#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int*, int&);
void Xuat(int*, int);
bool ktToanLe(int);
void LietKe(int*, int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
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

bool ktToanLe(int k)
{
	bool flag = true;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = false;
			return flag;
		}
		t = t / 10;
	}
	return flag;
}
void LietKe(int* a, int n)
{
	cout << "\nLiet ke cac so toan le: \n";
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << a[i] << setw(6);
}
