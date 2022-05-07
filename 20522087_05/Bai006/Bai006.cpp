#include<iostream>
using namespace std;
struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
int main()
{
	SOPHUC M;
	Nhap(M);
	cout << "So phuc vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap Thuc: ";
	cin >> x.Thuc;
	cout << "Nhap Ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

