// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
using namespace std;

#pragma once
class cPhanSo
{
private:
	int tuSo, mauSo;
	void toiGian();
public:
	static int gcd(int, int);
	cPhanSo(int = 0, int = 1);
	double layGiaTri();
	friend istream& operator>>(istream&, cPhanSo&);
	friend ostream& operator<<(ostream&, cPhanSo);
	friend cPhanSo operator+(cPhanSo, cPhanSo);
	friend cPhanSo operator-(cPhanSo, cPhanSo);
	friend cPhanSo operator*(cPhanSo, cPhanSo);
	friend cPhanSo operator/(cPhanSo, cPhanSo);
	friend bool operator>(cPhanSo, cPhanSo);
	friend bool operator<(cPhanSo, cPhanSo);
	friend bool operator==(cPhanSo, cPhanSo);
};