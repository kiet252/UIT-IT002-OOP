// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class cDonThuc
{
	private:
		double heSo;
		int bac;
	public:
		static bool firstDonThuc;
		cDonThuc();
		cDonThuc(double, int);
		double tinhGiaTri(double);
		void nhap(int);
		friend ostream& operator<<(ostream&, cDonThuc);
		cDonThuc operator+(cDonThuc);
		cDonThuc operator-(cDonThuc);
};

