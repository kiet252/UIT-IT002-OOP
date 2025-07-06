// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
using namespace std;

class cPhanSo
{
	private:
		int tu, mau;
	public:
		static int gcd(int, int);
		cPhanSo();
		cPhanSo(int, int);
		void rutGon();
		int getTu();
		int getMau();

		friend istream& operator>>(istream&, cPhanSo&);
		friend ostream& operator<<(ostream&, cPhanSo);

		cPhanSo operator+(cPhanSo);
		cPhanSo operator+(int);
		friend cPhanSo operator+(int, cPhanSo);

		cPhanSo operator-(cPhanSo);
		cPhanSo operator-(int);
		friend cPhanSo operator-(int, cPhanSo);

		cPhanSo operator*(cPhanSo);
		cPhanSo operator*(int);
		friend cPhanSo operator*(int, cPhanSo);

		cPhanSo operator/(cPhanSo);
		cPhanSo operator/(int);
		friend cPhanSo operator/(int, cPhanSo);

		cPhanSo operator-();

		bool operator<(cPhanSo);
		bool operator<(int);
		friend bool operator<(int, cPhanSo);

		bool operator>(cPhanSo);
		bool operator>(int);
		friend bool operator>(int, cPhanSo);
};

