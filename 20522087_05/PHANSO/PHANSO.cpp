#include<iostream>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
//Bai 90
int UCLN(int, int);
void RutGon(PHANSO&);
//Bai 91
PHANSO Tong(PHANSO, PHANSO);
//Bai 92
PHANSO Hieu(PHANSO, PHANSO);
// Bai 93
PHANSO Tich(PHANSO, PHANSO);
// Bai 94
PHANSO Thuong(PHANSO, PHANSO);
// Bai 95
int ktCoNghia(PHANSO);
// bai 96 
int ktToiGian(PHANSO);
//Bai 97
int ktDuong(PHANSO);
// Bai 98
int ktAm(PHANSO);
// Bai 99
void QuiDongMau(PHANSO&, PHANSO&);
// Bai 100
void QuiDongTu(PHANSO&, PHANSO&);
// Bai 101
int SoSanh(PHANSO, PHANSO);
// Bai 102
PHANSO operator+(PHANSO, PHANSO);
// Bai 103
PHANSO operator-(PHANSO, PHANSO);
// Bai 104
PHANSO operator*(PHANSO, PHANSO);
// Bai 105
PHANSO operator/(PHANSO, PHANSO);

int main()
{
	PHANSO A, B;
	cout << "\nNhap phan so A: ";
	Nhap(A);
	cout << "\nPhan so A vua nhap: ";
	Xuat(A);
	cout << "\nNhap phan so B: ";
	Nhap(B);
	cout << "\nPhan so B vua nhap: ";
	Xuat(B);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 90 ---- > 105): ";
	cin >> baitap;
	while (baitap < 90 || baitap > 105)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 90 ---- > 105): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 90:
	{
		cout << "Rut gon phan so A";
		RutGon(A);
		Xuat(A);
	}break;
	case 91:
	{
		cout << "Tong hai phan so A va B ";
		Xuat(Tong(A, B));
	}break;
	case 92:
	{
		cout << "Hieu hai phan so A va B ";
		Xuat(Hieu(A, B));
	}break;
	case 93:
	{
		cout << "Tich hai phan so A va B ";
		Xuat(Tich(A, B));
	}break;
	case 94:
	{
		cout << "Thuong hai phan so A va B ";
		Xuat(Thuong(A, B));
	}break;
	case 95:
	{
		cout << "Kiem tra co nghia phan so A \n";
		int kq = ktCoNghia(A);
		if (kq == 1)
			cout << "Phan so co nghia";
		else
			cout << "Phan so khong co nghia";
	}break;
	case 96:
	{
		cout << "Kiem tra toi gian phan so A \n";
		int kq = ktToiGian(A);
		if (kq == 1)
			cout << "Phan so toi gian";
		else
			cout << "Phan so khong toi gian";
	}break;
	case 97:
	{
		cout << "Kiem tra duong phan so A \n";
		int kq = ktDuong(A);
		if (kq == 1)
			cout << "Phan so duong";
		else
			cout << "Phan so khong duong";
	}break;
	case 98:
	{
		cout << "Kiem tra am phan so A \n";
		int kq = ktAm(A);
		if (kq == 1)
			cout << "Phan so am";
		else
			cout << "Phan so khong am";
	}break;
	case 99:
	{
		cout << "Qui dong mau phan so A va B \n";
		QuiDongMau(A, B);
		Xuat(A);
		Xuat(B);
	}break;
	case 100:
	{
		cout << "Qui dong tu so A va B \n";
		QuiDongTu(A, B);
		Xuat(A);
		Xuat(B);
	}break;
	case 101:
	{
		cout << "So sanh phan so A va B \n";
		int kq = SoSanh(A, B);
		if (kq == 1)
			cout << " A lon hon B";
		if (kq == -1)
			cout << " A nho hon B";
		if(kq == 0)
			cout << "A bang B ";
	}break;
	case 102:
	{
		cout << "Tong 2 phan so A va B \n";
		Xuat(operator+(A, B));
	}break;
	case 103:
	{
		cout << "Hieu 2 phan so A va B \n";
		Xuat(operator-(A, B));
	}break;
	case 104:
	{
		cout << "Tich 2 phan so A va B \n";
		Xuat(operator*(A, B));
	}break;
	case 105:
	{
		cout << "Thuong 2 phan so A va B \n";
		Xuat(operator/(A, B));
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "\nNhap Mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}
PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO Tich(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO Thuong(PHANSO x, PHANSO y)
{

	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;
}
int ktCoNghia(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return 0;
}
int ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}
int ktDuong(PHANSO x)
{
	if ((x.Tu * x.Mau) > 0)
		return 1;
	return 0;
}
int ktAm(PHANSO x)
{
	if ((x.Tu * x.Mau) < 0)
		return 1;
	return 0;
}
void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}
void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
PHANSO operator+(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
PHANSO operator/(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;
}


