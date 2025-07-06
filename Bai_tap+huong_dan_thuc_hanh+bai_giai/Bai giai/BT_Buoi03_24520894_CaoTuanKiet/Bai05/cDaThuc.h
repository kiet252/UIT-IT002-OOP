// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cDonThuc.h"
#include <vector>
class cDaThuc
{
	private:
		vector<cDonThuc> danhSachDonThuc;
	public:
		cDaThuc();
		cDaThuc(int);
		cDaThuc(vector<cDonThuc>);
		double tinhGiaTri(double);
		friend istream& operator>>(istream&, cDaThuc&);
		friend ostream& operator<<(ostream&, cDaThuc);
		cDaThuc operator+(cDaThuc);
		cDaThuc operator-(cDaThuc);
};

