#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&);
int ktTonTai(float, float, float, float, float, float);
int main()
{
	float xA, yA, xB, yB, xC, yC;
	Nhap(xA, yA, xB, yB, xC, yC);
	int kq = ktTonTai(xA, yA, xB, yB, xC, yC);
	if (kq == 1)
		cout << "La 3 dinh tam giac";
	if (kq == 2)
		cout << "Khong la 3 dinh tam giac";
	return 1;
}
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC)
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
}
int ktTonTai(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float AB = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float BC = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	float AC = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	if (AB < BC + AC && BC < AC + AB && AC < AB + BC)
		return 1;
	else
		return 2;
}