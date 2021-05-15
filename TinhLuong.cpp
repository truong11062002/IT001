#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class CNgay
{
private:
	int ng;
	int th;
	int nm;
public:
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, CNgay&);
	friend ostream& operator << (ostream&, CNgay&);

};

class CNhanVien
{
protected:
	string HoTen;
	CNgay NgaySinh;
	float LuongCoBan;
	float Luong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual CNhanVien* TimKiem(string);
	virtual void TinhLuong();
	virtual float GetLuong();
};

class CVanPhong :public CNhanVien
{
protected:
	int SoNgay;
	float TroCap;
public:
	void Nhap();
	void Xuat();
	CNhanVien* TimKiem(string);
	void TinhLuong();
	float GetLuong();
};

class CSanXuat :public CNhanVien
{
protected:
	int SoSP;
public:
	void Nhap();
	void Xuat();
	CNhanVien* TimKiem(string);
	void TinhLuong();
	float GetLuong();
};

class CQuanLy :public CNhanVien
{
protected:
	float HeSo;
	float Thuong;
public:
	void Nhap();
	void Xuat();
	CNhanVien* TimKiem(string);
	void TinhLuong();
	float GetLuong();
};

class CCongTy
{
protected:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	CNhanVien* TimKiem(string);
	float TongLuong();
};
int main()
{
	CCongTy A;
	A.Nhap();
	A.TinhLuong();
	cout << "\nThong tin cong ty vua nhap:\n";
	A.Xuat();
	string TongLuongstr = to_string(A.TongLuong());
	cout << "\nTong luong cua cong ty: ";
	for (int i = 0; i < TongLuongstr.length() - 7; i++)
	{
		cout << TongLuongstr[i];
	}
	string ten;
	cout << "\n\nNhap ten nhan vien can tim: ";
	cin.ignore();
	getline(cin, ten);
	CNhanVien* kq = A.TimKiem(ten);
	if (kq != NULL)
	{
		cout << "\nNhan vien can tim:";
		kq->Xuat();
	}
	else
		cout << "\nKhong tim thay nhan vien.";

	cout << "\n\nKET THUC.\n";

	return 1;
}

void CNgay::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> ng;
	cout << "Nhap thang: ";
	cin >> th;
	cout << "Nhap nam: ";
	cin >> nm;
}
void CNgay::Xuat()
{
	cout << ng << "/" << th << "/" << nm;
}
istream& operator >> (istream& is, CNgay& x)
{
	cout << "Nhap ngay: ";
	is >> x.ng;
	cout << "Nhap thang: ";
	is >> x.th;
	cout << "Nhap nam: ";
	is >> x.nm;
	return is;
}
ostream& operator << (ostream& os, CNgay& x)
{
	os << x.ng << "/" << x.th << "/" << x.nm;
	return os;
}

void CNhanVien::Nhap()
{
	return;
}
void CNhanVien::Xuat()
{
	return;
}
void CNhanVien::TinhLuong()
{
	return;
}
float CNhanVien::GetLuong()
{
	return Luong;
}
CNhanVien* CNhanVien::TimKiem(string name)
{
	if (HoTen == name)
		return this;
	return NULL;
}

void CVanPhong::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	cin >> NgaySinh;
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgay;
	cout << "Nhap tro cap: ";
	cin >> TroCap;
}
void CVanPhong::Xuat()
{
	cout << "\nNhap vien van phong";
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	string basesl = to_string(LuongCoBan);
	cout << "\nLuong co ban: ";
	for (int i = 0; i < basesl.length() - 7; i++)
	{
		cout << basesl[i];
	}
	string salary = to_string(Luong);
	cout << "\nLuong: ";
	for (int i = 0; i < salary.length() - 7; i++)
	{
		cout << salary[i];
	}
	cout << "\nSo ngay lam viec: " << SoNgay;
	cout << "\nTro cap: " << TroCap;
}
void CVanPhong::TinhLuong()
{
	Luong = LuongCoBan + SoNgay * 100000 + TroCap;
}
float CVanPhong::GetLuong()
{
	return Luong;
}
CNhanVien* CVanPhong::TimKiem(string name)
{
	if (HoTen == name)
		return this;
	return NULL;
}

void CSanXuat::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	cin >> NgaySinh;
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap so san pham: ";
	cin >> SoSP;
}
void CSanXuat::Xuat()
{
	cout << "\nNhap vien san xuat";
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	string basesl = to_string(LuongCoBan);
	cout << "\nLuong co ban: ";
	for (int i = 0; i < basesl.length() - 7; i++)
	{
		cout << basesl[i];
	}
	string salary = to_string(Luong);
	cout << "\nLuong: ";
	for (int i = 0; i < basesl.length() - 7; i++)
	{
		cout << basesl[i];
	}
	cout << "\nSo san pham lam duoc: " << SoSP;
}
void CSanXuat::TinhLuong()
{
	Luong = LuongCoBan + SoSP * 2000;

}
float CSanXuat::GetLuong()
{
	return Luong;
}
CNhanVien* CSanXuat::TimKiem(string name)
{
	if (HoTen == name)
		return this;
	return NULL;
}

void CQuanLy::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	cin >> NgaySinh;
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap he so chuc vu: ";
	cin >> HeSo;
	cout << "Nhap thuong: ";
	cin >> Thuong;
}
void CQuanLy::Xuat()
{
	cout << "\nNhap vien quan ly";
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	string basesl = to_string(LuongCoBan);
	cout << "\nLuong co ban: ";
	for (int i = 0; i < basesl.length() - 7; i++)
	{
		cout << basesl[i];
	}
	string salary = to_string(Luong);
	cout << "\nLuong: ";
	for (int i = 0; i < basesl.length() - 7; i++)
	{
		cout << basesl[i];
	}
	cout << "\nHe so chuc vu: " << HeSo;
	cout << "\nThuong: " << Thuong;
}
void CQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSo + Thuong;

}
float CQuanLy::GetLuong()
{
	return Luong;
}
CNhanVien* CQuanLy::TimKiem(string name)
{
	if (HoTen == name)
		return this;
}


void CCongTy::Nhap()
{
	cout << "Nhap so nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin nhan vien thu " << i + 1 << ":\n";
		int loai;
		cout << "Nhap cong viec: (0.Van phong 1.San xuat 2.Quan ly): ";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CVanPhong;
			break;
		case 1: ds[i] = new CSanXuat;
			break;
		case 2: ds[i] = new CQuanLy;
			break;
		}
		ds[i]->Nhap();
	}
}
void CCongTy::Xuat()
{
	cout << "Tong so nhan vien: " << n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ":";
		ds[i]->Xuat();
	}
}
void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
		ds[i]->TinhLuong();
}
float CCongTy::TongLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->GetLuong();
	return s;
}
CNhanVien* CCongTy::TimKiem(string name)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(name);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}