#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int c = (n / 100) % 10;
	cout << "Chu so hang tram la: " << c;
	return 0;
}