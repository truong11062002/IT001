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
// Bai 174
int ktNhuan(NGAY);
// Bai 175
int SoNgayToiDaTrongThang(NGAY);
// Bai 176
int SoNgayToiDaTrongNam(NGAY);
// Bai 177
int ktHople(NGAY);
// Bai 178
int SoSanh(NGAY, NGAY);
// Bai 179
int SoThuTuTrongNam(NGAY);
// Bai 180
int SoThuTu(NGAY);
// Bai 181
void XuatThu(NGAY);
// Bai 182
int KhoangCach(NGAY, NGAY);
// Bai 183
NGAY TimNgay(int, int);
// Bai 184
NGAY TimNgay(int);
// Bai 185
NGAY KeTiep(NGAY);
//Bai 186
NGAY TruocDo(NGAY);
// Bai 187
NGAY KeTiep(NGAY, int);
// Bai 188
NGAY TruocDo(NGAY, int);
int main()
{
	NGAY ng;
	cout << "Nhap ngay thang nam: ";
	Nhap(ng);
	cout << "Ngay vua nhap: ";
	Xuat(ng);
	int baitap;
	cout << "\nNhap bai tap can giai tu bai ( 174 ---- > 188): ";
	cin >> baitap;
	while (baitap < 174 || baitap > 188)
	{
		cout << "Xin vui long nhap lai!!";
		cout << "\nNhap bai tap can giai tu bai ( 174 ---- > 188): ";
		cin >> baitap;
	}
	switch (baitap)
	{
	case 174:
	{
		cout << "Kiem tra nam nhuan hay khong \n";
		int kq = ktNhuan(ng);
		if (kq == 1)
			cout << "La nam nhuan";
		else
			cout << "Khong la nam nhuan";
	}break;
	case 175:
	{
		int kq = SoNgayToiDaTrongThang(ng);
		cout << "So ngay toi da trong thang: " << kq;
	}break;
	case 176:
	{
		int kq = SoNgayToiDaTrongNam(ng);
		cout << "So ngay toi da trong nam: " << kq;
	}break;
	case 177:
	{
		cout << "Kiem tra tinh hop le cua mot ngay \n";
		int kq = ktHople(ng);
		if (kq == 0)
			cout << "Ngay khong hop le ";
		else
			cout << "Ngay hop le";
	}break;
	case 178:
	{
		NGAY ng2;
		cout << "\nNhap ngay 2: ";
		Nhap(ng2);
		cout << "So sanh 2 ngay \n";
		int kq = SoSanh(ng, ng2);
		if (kq == 1)
			cout << "Ngay thu 1 lon hon ngay thu 2 ";
		if (kq == -1)
			cout << "Ngay thu 2 lon hon ngay thu 1";
		if (kq == 0)
			cout << "2 ngay bang nhau ";
	}break;
	case 179:
	{
		int kq = SoThuTuTrongNam(ng);
		cout << "So thu tu ngay trong nam: " << kq;
	}break;
	case 180:
	{
		int kq = SoThuTu(ng);
		cout << "So thu tu ke tu ngay 01/01/01: " << kq;
	}break;
	case 181:
	{
		cout << "Thu cua mot ngay \n";
		XuatThu(ng);
	}break;
	case 182:
	{
		NGAY ng2;
		cout << "Nhap ngay 2: ";
		Nhap(ng2);
		int kq = KhoangCach(ng, ng2);
		cout << "Khoang cach giua 2 ngay la " << kq;
	}break;
	case 183:
	{
		int nam, stt;
		cout << "Nhap nam: ";
		cin >> nam;
		cout << "Nhap stt: ";
		cin >> stt;
		cout << "Tim ngay khi biet nam va so thu tu ";
		Xuat(TimNgay(nam,stt));
	}break;
	case 184:
	{
		int stt;
		cout << "Nhap stt: ";
		cin >> stt;
		cout << "Ngay khi biet stt ke tu ngay 1/1/1 \n";
		Xuat(TimNgay(stt));
	}break;
	case 185:
	{
		cout << "Ngay ke tiep la: ";
		Xuat(KeTiep(ng));
	}break;
	case 186:
	{
		cout << "Ngay truoc do la: ";
		Xuat(TruocDo(ng));
	}break;
	case 187:
	{
		int k;
		cout << "Nhap k ngay: ";
		cin >> k;
		cout << "Ngay ke tiep k ngay: ";
		Xuat(KeTiep(ng, k));
	}break;
	case 188:
	{
		int k;
		cout << "Nhap k ngay: ";
		cin >> k;
		cout << "Ngay truoc do k ngay: ";
		Xuat(TruocDo(ng, k));
	}break;
	default:
		break;
	}
	return 1;
}
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ng;
	cout << "\nNhap thang: ";
	cin >> x.th;
	cout << "\nNhap nam: ";
	cin >> x.nm;
}
void Xuat(NGAY x)
{
	cout << "\nNgay = " << x.ng;
	cout << "\nThang = " << x.th;
	cout << "\nNam = " << x.nm;
}
int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int ktHople(NGAY x)
{
	if (x.nm < 1)
		return 0;
	if (x.th < 1)
		return 0;
	if (x.th > 12)
		return 0;
	if (x.ng < 1)
		return 0;
	if (x.ng > SoNgayToiDaTrongThang(x))
		return 0;
	return 1;
}
int SoSanh(NGAY x, NGAY y)
{
	if (x.nm > y.nm)
		return 1;
	if (x.nm < y.nm)
		return -1;
	if (x.th > y.th)
		return 1;
	if (x.th < y.th)
		return -1;
	if (x.ng > y.ng)
		return 1;
	if (x.th < y.th)
		return -1;
	return 0;
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;

	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.nm };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}
int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.nm - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}
void XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu nhat";
		break;
	case 1: cout << "Thu hai";
		break;
	case 2: cout << "Thu ba";
		break;
	case 3: cout << "Thu tu";
		break;
	case 4: cout << "Thu nam";
		break;
	case 5: cout << "Thu sau";
		break;
	case 6: cout << "Thu bay";
		break;
	}
}
int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}
NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}
NGAY KeTiep(NGAY x)
{
	int stt = SoThuTu(x);
	stt = stt + 1;
	return TimNgay(stt);
}
NGAY TruocDo(NGAY x)
{
	if (x.ng == 1 && x.th == 1 && x.nm == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}
NGAY KeTiep(NGAY x, int k)
{
	int stt = SoThuTu(x);
	stt = stt + k;
	return TimNgay(stt);
}
NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = TruocDo(temp);
	return temp;
}
