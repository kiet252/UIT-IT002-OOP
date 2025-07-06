// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "khachHang.h"

class khachHangLoaiA : public khachHang
{
public:
	khachHangLoaiA(string = "", unsigned long = 0, unsigned long = 0);
	void xuatThongTin(ofstream&);
	unsigned long tinhSoTienPhaiTra();
};

