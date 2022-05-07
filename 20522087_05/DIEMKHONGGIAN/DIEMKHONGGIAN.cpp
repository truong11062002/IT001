#include<iostream>
#include<iomanip>
using namespace std;
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
//Bai 67
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
//Bai 68
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);
//Bai 69
float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);
//Bai 70
float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);
//Bai 71
float KhoangCachGoc(DIEMKHONGGIAN);
//Bai 72
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);
//Bai 73
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);
//Bai 74
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
//Bai 75
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN);
//Bai 76
int ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);
int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap toa do diem P\n";
	Nhap(P);
	cout << "\nToa do diem P vua nhap: ";
	Xuat(P);
	DIEMKHONGGIAN Q;
	cout << "\nNhap toa do diem Q ";
	Nhap(Q);
	cout << "Toa do diem Q vua nhap";
	Xuat(Q);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 67 ---- > 76): ";
	cin >> baitap;
	while (baitap < 67 || baitap > 76)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 67 ---- > 76): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 67:
	{
		float kq = KhoangCach(P, Q);
		cout << "Khoang cach P va Q: " << kq;
	}break;
	case 68:
	{
		float kq = KhoangCachX(P, Q);
		cout << "Khoang cach P va Q theo phuong Ox: " << kq;
	}break;
	case 69:
	{
		float kq = KhoangCachY(P, Q);
		cout << "Khoang cach P va Q theo phuong Oy: " << kq;
	}break;
	case 70:
	{
		float kq = KhoangCachZ(P, Q);
		cout << "Khoang cach P va Q theo phuong Oz: " << kq;
	}break;
	case 71:
	{
		float kq = KhoangCachGoc(P);
		cout << "Khoang cach diem P den goc toa do: " << kq;
	}break;
	case 72:
	{
		cout << "Diem doi xung goc cua P la: ";
		Xuat(DoiXungGoc(P));
	}break;
	case 73:
	{
		cout << "Diem doi xung qua mat phang Oxy cua P la: ";
		Xuat(DoiXungOxy(P));
	}break;
	case 74:
	{
		cout << "Diem doi xung qua mat phang Oxz cua P la: ";
		Xuat(DoiXungOxz(P));
	}break;
	case 75:
	{
		cout << "Diem doi xung qua mat phang Oyz cua P la: ";
		Xuat(DoiXungOyz(P));
	}break;
	case 76:
	{
		cout << "Kiem tra co diem P va Q co trung hay khong: ";
		int kq = ktTrung(P, Q);
		if (kq == 1)
			cout << "\nDiem P va Q trung nhau";
		else
			cout << "\nDiem P va Q khong trung nhau";
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
	cout << "\nNhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}
float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}
float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}
float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);

}
float KhoangCachGoc(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{

	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}
int ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return 1;
	return 0;
}
