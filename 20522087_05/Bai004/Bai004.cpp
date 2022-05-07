#include<iostream>
using namespace std;
struct phanso
{
	float Tu;
	float Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int main()
{
	PHANSO M;
	Nhap(M);
	cout << "Phan so vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

