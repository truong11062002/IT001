#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
struct hocsinh
{
	string HoTen;
	int Toan;
	int Van;
	float TrungBinh;
};
typedef struct hocsinh HOCSINH;
void Nhap(HOCSINH[], int&);
void Nhap(HOCSINH&);
void Xuat(HOCSINH[], int);
void Xuat(HOCSINH);
bool kthsg(int, int);
int Demhsg(HOCSINH[], int);
int main()
{
	HOCSINH a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n So hoc sinh gioi la : " << Demhsg(a, n);
	return 1;
}
void Nhap(HOCSINH a[], int& n)
{
	cout << "nhap so hoc sinh : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}
void Nhap(HOCSINH& b)
{
	cout << "nhap ten : ";
	cin.ignore();
	getline(cin, b.HoTen);
	cout << "nhap diem toan : ";
	cin >> b.Toan;
	cout << "nhap diem van : ";
	cin >> b.Van;
	cout << "nhap diem trung binh : ";
	cin >> b.TrungBinh;
}
void Xuat(HOCSINH a[], int n)
{
	cout << "cac hoc sinh trong lop la :\n";
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
void Xuat(HOCSINH a)
{
	cout << a.HoTen << setw(30) << "Toan : " << a.Toan << "     Van : " << a.Van << "    TB : " << a.TrungBinh << endl;
}
bool kthsg(int a, int b)
{
	if (a >= 8 && b >= 8)
		return true;
	return false;
}
int Demhsg(HOCSINH a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kthsg(a[i].Toan, a[i].Van))
			dem++;
	}
	return dem;
}