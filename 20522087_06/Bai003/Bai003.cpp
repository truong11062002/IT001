#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void Xuat(int*, int);

int main()
{
	ifstream fi("intdata01.inp", ios::in);
	if (fi.fail() == true)
		cout << "Khong mo duoc file !!";

	int* a;
	int n;

	fi >> n;
	a = new int[n];

	for (int i = 0; i < n; i++)
		fi >> a[i];
	Xuat(a, n);
	fi.close();
	return 1;
}

void Xuat(int* a, int n)
{
	cout << "Phan tu cua file: \n";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}