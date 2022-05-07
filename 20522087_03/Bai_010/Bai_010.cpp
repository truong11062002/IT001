#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nCac mang co toan chu so le: " << endl;
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

bool ktToanLe(int n)
{
	int flag = true;
	for (int t = abs(n); t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == true)
			cout << a[i] << " ";
}