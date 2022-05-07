#include<iostream>
using namespace std;
struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Xuat(NGAY);
int main()
{
	NGAY M;
	Nhap(M);
	cout << "Ngay vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}
void Xuat(NGAY x)
{
	cout << "\nNgay = " << x.ng;
	cout << "\nThang = " << x.th;
	cout << "\nNam = " << x.nm;
}

