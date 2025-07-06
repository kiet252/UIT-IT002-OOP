// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "khachHang.h"

class khachHangLoaiB : public khachHang
{
private:
	unsigned int soNamThanThiet;
public:
	khachHangLoaiB(string = "", unsigned long = 0, unsigned long = 0, unsigned int = 0);
	void nhapThongTin(ifstream&);
	void xuatThongTin(ofstream&);
	unsigned long tinhSoTienPhaiTra();
};

