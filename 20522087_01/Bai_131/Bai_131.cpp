#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC;
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
	float AB = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float BC = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	float AC = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	if (AB < BC + AC && BC < AC + AB && AC < AB + BC)
		cout << "La 3 dinh tam giac";
	else
		cout << "Khong la 3 dinh tam giac";
	return 1;
}