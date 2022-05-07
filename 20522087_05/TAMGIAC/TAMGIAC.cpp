#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
// Bai 163
float KhoangCach(DIEM, DIEM);
int KiemTra(TAMGIAC);
// Bai 164
float ChuVi(TAMGIAC);
// Bai 165
float DienTich(TAMGIAC);
// Bai 166
DIEM TrongTam(TAMGIAC);
// Bai 167
DIEM HoanhLonNhat(TAMGIAC);
// Bai 168
DIEM TungNhoNhat(TAMGIAC);
// Bai 169
float TongKhoangCach(TAMGIAC, DIEM);
// Bai 170
int DangTamGiac(TAMGIAC);
int main()
{
	TAMGIAC tg;
	Nhap(tg);
	cout << "Tam giac vua nhap: ";
	Xuat(tg);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 163 ---- > 170): ";
	cin >> baitap;
	while (baitap < 163 || baitap > 170)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 163 ---- > 170): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 163:
	{
		cout << "Kiem tra 3 dinh co lap thanh tam giac khong \n";
		int kq = KiemTra(tg);
		if (kq == 1)
			cout << "ba dinh la tam giac ";
		else
			cout << "ba dinh khong la tam giac ";
	}break;
	case 164:
	{
		float kq = ChuVi(tg);
		cout << "Chu vi tam giac: " << kq;
	}break;
	case 165:
	{
		float kq = DienTich(tg);
		cout << "Dien tich tam giac: " << kq;
	}break;
	case 166:
	{
		cout << "Trong tam cua tam giac \n";
		Xuat(TrongTam(tg));
	}break;
	case 167:
	{
		cout << "Dinh trong tam giac co hoanh do lon nhat \n";
		Xuat(HoanhLonNhat(tg));
	}break;
	case 168:
	{
		cout << "Dinh trong tam giac co tung do nho nhat \n";
		Xuat(TungNhoNhat(tg));
	}break;
	case 169:
	{
		DIEM P;
		cout << "Nhap diem P: ";
		Nhap(P);
		float kq = TongKhoangCach(tg, P);
		cout << "Tong khoang cach tu diem P toi 3 dinh:  " << kq;
	}break;
	case 170:
	{
		cout << "Kiem tra dang tam giac \n";
		int kq = DangTamGiac(tg);
		switch (kq)
		{
		case 0:
		{
			cout << "Khong la tam giac";
		}break;
		case 1:
		{
			cout << "Tam giac deu";
		}break;
		case 2:
		{
			cout << "Tam giac vuong can";
		}break;
		case 3: 
		{
			cout << "Tam giac vuong";
		}break;
		case 4:
		{
			cout << "Tam giac can";
		}break;
		case 5:
		{
			cout << "Tam giac thuong";
		}break;
		default:
			break;
		}
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}
void Nhap(TAMGIAC& t)
{
	cout << "\nNhap diem A: ";
	Nhap(t.A);
	cout << "\nNhap diem B: ";
	Nhap(t.B);
	cout << "\nNhap diem C: ";
	Nhap(t.C);
}
void Xuat(TAMGIAC t)
{
	cout << "\nToa do diem A: ";
	Xuat(t.A);
	cout << "\nToa do diem B: ";
	Xuat(t.B);
	cout << "\nToa do diem C: ";
	Xuat(t.C);
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (a + b > c && b + c > a && a + c > b)
		return 1;
	return 0;
}
float ChuVi(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	return a + b + c;
}
float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}
DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}
DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if (t.C.y < lc.y)
		lc = t.C;
	return lc;
}
float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float a = KhoangCach(t.A, P);
	float b = KhoangCach(t.B, P);
	float c = KhoangCach(t.C, P);
	return a + b + c;
}
int DangTamGiac(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (!(a + b > c && b + c > a && a + c > b))
		return 0;
	if (a == b && b == c)
		return 1;
	if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
	{
		if (a == b || b == c || a == c)
			return 2;
		return 3;
	}
	if (a == b || b == c || a == c)
		return 4;
	return 5;
}
