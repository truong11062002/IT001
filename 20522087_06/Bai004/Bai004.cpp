#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void Xuat(float*, int);

int main()
{
	ifstream fi("floatdata.inp", ios::in);
	if (fi.fail() == true)
		cout << "Khong mo duoc file !!";

	float* a;
	int n;

	fi >> n;
	a = new float[n];

	for (int i = 0; i < n; i++)
		fi >> a[i];
	Xuat(a, n);
	fi.close();
	return 1;
}

void Xuat(float* a, int n)
{
	cout << "Phan tu cua file: \n";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}