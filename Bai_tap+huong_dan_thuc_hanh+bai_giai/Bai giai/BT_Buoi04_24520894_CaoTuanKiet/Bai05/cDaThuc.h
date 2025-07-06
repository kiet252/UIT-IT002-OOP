// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <vector>
#include <map>
#include <algorithm>
#include "cDonThuc.h"
class cDaThuc
{
private:
	vector<cDonThuc> danhSachDonThuc;

	static bool bacBeHon(cDonThuc, cDonThuc);
	cDonThuc layDonThucBacLonNhat();
public:
	cDaThuc(size_t = 0);
	cDaThuc(vector<cDonThuc>);
	bool isEmpty();
	void ketHopDonThucTrungLap();
	friend istream& operator>>(istream&, cDaThuc&);
	friend ostream& operator<<(ostream&, cDaThuc);
	cDaThuc operator+(cDaThuc);
	cDaThuc operator-(cDaThuc);
	cDaThuc operator*(cDaThuc);
	cDaThuc chia(cDaThuc, cDaThuc&);
	double tinhGiaTri(double);
};

