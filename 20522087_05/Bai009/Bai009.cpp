#include<iostream>
using namespace std;
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
int main()
{
	DONTHUC M;
	Nhap(M);
	cout << "Don thuc vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << "\nHe so = " << f.a;
	cout << "\nSo mu = " << f.n;
}

