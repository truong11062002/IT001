#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&, float&, float&);
int ktThuoc(float, float, float, float, float, float, float, float);
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	Nhap(xA, yA, xB, yB, xC, yC, xM, yM);
	int kq = ktThuoc(xA, yA, xB, yB, xC, yC, xM, yM);
	if (kq == 1)
		cout << "M o trong";
	if (kq == 2)
		cout << "M o ngoai";
	return 1;
}
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM)
{
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;
}
int ktThuoc(float xA, float yA, float xB, float yB, float xC, float yC, float xM, float yM)
{
	float SABC = 0.5 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float SMAB = 0.5 * abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB);
	float SMBC = 0.5 * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float SMCA = 0.5 * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (SABC == SMAB + SMBC + SMCA)
		return 1;
	else
		return 2;
}