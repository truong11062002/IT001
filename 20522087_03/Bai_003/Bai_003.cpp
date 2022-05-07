#include <iostream>
#include <fstream>
#include <iomanip>      // std::setw
#include <string>

using namespace std;

int Nhap(int[], int&, string);
int Xuat(int[], int);

int main()
{
	int b[100000];
	int k;

	for (int i = 1; i <= 13; i++)
	{
		string filename = "intdata";
		if (i < 10)
			filename += '0';
		filename += to_string(i);

		string filenameinp = filename;
		filenameinp += ".inp";

		if (Nhap(b, k, filenameinp) == 1)
		{
			
		}
		else
			cout << "\n Khong mo duoc file " << filename << "\n";
	}
	cout << "\n Done ";
	cout << "\n\n\n";
	return 1;

}
int Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	if (fi.fail() == true)
		return 0;
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;
}

int Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
	return 1;
}